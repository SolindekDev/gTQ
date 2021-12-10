#include "gtq/main.c"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    wchar_t* nameOfComputer = computerName();
    printf("The name of computer is %ls", nameOfComputer);
}