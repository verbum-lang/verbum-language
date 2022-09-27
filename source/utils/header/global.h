
#ifndef VERBUM_LIBRARY_GLOBAL
#define VERBUM_LIBRARY_GLOBAL

#include "libraries.h"
#include "macros.h"
#include "../../settings/settings.h"

/**
 * Global application settings.
 */

typedef struct {
    struct {
        struct {
            char *id;
        } node;
        
        struct {
            char *id;
            int server_port;
        } node_mapper;
    } configuration;
} global_t;

int random_number  (int min, int max);
int ignore_sigpipe (void);

#endif

