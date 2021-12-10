#include "gtq/main.c"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int sizeHeight = systemHeightSize();

    printf("Height of monitor is %dpx", sizeHeight);
}