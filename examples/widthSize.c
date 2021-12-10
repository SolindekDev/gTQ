#include "gtq/main.c"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int sizeWidth = systemWidthSize();

    printf("Width of monitor is %dpx", sizeWidth);
}