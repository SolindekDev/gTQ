#include "gtq/main.c"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int versionWindows = getWindowsVersion();

    switch(versionWindows) {
        case 1:
            printf("Windows 10+");
            return 0;
        case 2:
            printf("Windows 8.1+");
            return 0;
        case 3:
            printf("Windows 8");
            return 0;
        case 4:
            printf("Windows 7");
            return 0;
        case 5:
            printf("Windows Vista");
            return 0;
        case 6:
            printf("Windows XP");
            return 0;
    }
}