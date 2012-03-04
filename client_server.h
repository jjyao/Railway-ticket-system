/**
 * This file contains the data, macro common to both client and server
 */

#ifndef CLIENT_SERVER_H
#define CLIENT_SERVER_H


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#include <signal.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <arpa/inet.h>

#define BUFFER_SIZE 1024
#define SERVER_PUBLIC_FIFO_NAME "/tmp/server_public_fifo"

#define ESTABLISH_CONNECTION_REQUEST 0
#define ESTABLISH_CONNECTION_RESPONSE 1
#define ESTABLISH_CONNECTION_ACK 2

char* Fgets(char* s, int size, FILE* stream);

#endif