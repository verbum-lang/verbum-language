
#ifndef VERBUM_LIBRARY_GLOBAL
#define VERBUM_LIBRARY_GLOBAL

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <pthread.h>

// General configurations.
#define CONNECTIONS_TIMEOUT1            3
#define LOCALHOST                       "127.0.0.1"
#define SERVERS_MAX_CONNECTION          1000

// Configurations e definations.
#define initialization main // Entry point.

// Global application data control.
typedef struct {
    struct {
        int argc;
        char **argv;
        char *path;     // Running application path.
    } instance;

    struct {
        char *path;     // Directory path of configuration file.
        char *content;  // Data content of configuration file.

        // Node Mapper configuration.
        struct {
            int server_port;
        } node_mapper;

        // Fault Tolerance configuration.
        struct {
            int server_port;
        } fault_tolerance;
    } configuration;

    
} global_t;

global_t global;

#endif


