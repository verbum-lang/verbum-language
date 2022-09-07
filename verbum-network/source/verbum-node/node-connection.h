
#ifndef VERBUM_NODE_CONNECTION
#define VERBUM_NODE_CONNECTION

#include "global.h"
#include "node-global.h"

// Connections types.
typedef struct node_connection_st {
    char *id;                           // Connection ID.
    int status;                         // Status (struct item):
                                        //  0 = free to use.
                                        //  1 = started by controller.
                                        //  2 = running (in use).

    // Control / flags.
    int connection_status;              // Status (connection):
                                        //  0 = waiting response.
                                        //  1 = success.
                                        //  2 = error.

    // Connection informations.
    int type;                           // Type:
                                        //  0 = output.
                                        //  1 = input.
    char *src_node_id;                  // Source node ID.
    char *dst_node_id;                  // Destination node ID.
    char *dst_nm_id;                    // Destination Node Mapper ID. 
    char *dst_nm_address;               // Destination Node Mapper address (IP).
    char *dst_nm_port;                  // Destination Node Mapper interface port.

    struct node_connection_st *next;    // Next node pointer.
} node_connection_t;

void              *node_connection        (void *tparam);
node_connection_t *connection_create_item (void);

#endif


