
#include "node.h"
#include "monitor-processes.h"
#include "node-core.h"
#include "node-client.h"
#include "node-server.h"

pthread_mutex_t    mutex_gconfig = PTHREAD_MUTEX_INITIALIZER;
node_config_t     *gconfig = NULL;

pthread_mutex_t    node_mutex_connections = PTHREAD_MUTEX_INITIALIZER;
node_connection_t *node_connections = NULL;

int verbum_node (void)
{
    // General preparation.
    if (!general_preparation())
        say_ret(0, "general preparation failed.");

    // Prepare global configurations.
    mem_alloc_ret(gconfig, sizeof(node_config_t), node_config_t *, 0);

    gconfig->path             = NULL;
    gconfig->max_connections  = SERVERS_MAX_CONNECTION;
    gconfig->node_mapper_port = global.configuration.node_mapper.server_port;

    mem_scopy_ret(global.configuration.node_mapper.id, gconfig->node_mapper_id, 0);
    
    if (global.configuration.node.id)
        mem_salloc_scopy(global.configuration.node.id, gconfig->information.id);

    // Prepare mutex.
    if (pthread_mutex_init(&mutex_gconfig, NULL) != 0) 
        say_ret(0, "mutex init failed - global configuration.");

    // Prepare mutex.
    if (pthread_mutex_init(&node_mutex_connections, NULL) != 0) 
        say_ret(0, "mutex init failed - connections.");
    
    // Start Node Mapper monitor.
    if (!monitor_processes())
        return 0; 
    
    /**
     * Node Core interface.
     */
    create_thread_controller(node_core);

    /**
     * Node client connections control.
     */
    create_thread_controller(node_client);

    /**
     * Node Server interface.
     */
    create_thread_controller(node_server);

    return 1;
}


