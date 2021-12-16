#include "gtq/main.c"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    printf("Free physical memory: %d", memoryFreePhys());
}