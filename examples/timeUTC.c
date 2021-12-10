#include "gtq/main.c"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    struct GTQ_TIME localTime = getLocalTime();

    printf("It's %02d year", localTime.year);
}