#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include "utils.h"

int main(int argc, char const *argv[]) {
    print_args(argc, argv);
    if (argc != 2) {
        printf("Usage: %s <port>\n", argv[0]);
        return 1;
    }
    int inb_port = argv[1];
    int out_port = argv[2];
    if (inb_port < 0 || inb_port > 65535) {
        printf("Invalid inbound port number\n");
        return 1;
    }
    if (out_port < 0 || out_port > 65535) {
        printf("Invalid outbound port number\n");
        return 1;
    }
    return 0;
}
