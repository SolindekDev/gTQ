#include "gtq/main.c"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    printf("Free disk memory in GB: %dgb\n", freeDiskMemory(GTQ_MEM_GB, L"C:\\"));
    printf("Free disk memory in MB: %dmb\n", freeDiskMemory(GTQ_MEM_MB, L"C:\\"));
    printf("Free disk memory: %d", freeDiskMemory(GTQ_MEM_NC, L"C:\\"));
}