
#ifndef VERBUM_NM
#define VERBUM_NM

#include "global.h"

// Thread param.
typedef struct {
    char *id;                           // Node Mapper ID.
    int port;                           // Server port.
    int max_connections;                // Server max connections.
} param_t;

// Thread param.
typedef struct {
    int wid;                            // Worker ID.
    char *nm_id;                        // Node Mapper ID.
} nm_worker_param_t;

int initialize_node_mapper   (void);
int open_node_mapper_process (void);

#endif


