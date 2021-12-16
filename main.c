#include "src/main.c"
#include "stdio.h"

int main(int argc, char **argv) {
    // printf("Windows Version: %d\n", GetWindowsVersion());

    // printf("Memory Usage: %d%%", memoryUsePercentage());

    // int freeMem = freeDiskMemory(GTQ_MEM_MB, L"C:\\");
    // printf("Free Memory: %dmb", freeMem);

    // int freeMem = freeDiskMemory(GTQ_MEM_GB, L"C:\\");
    // printf("Free Memory: %dgb", freeMem);

    // int freeMem = totalDiskMemory(GTQ_MEM_GB, L"C:\\");
    // printf("Total Memory: %dgb", freeMem);

    // int freeMem = occupiedDiskMemory(GTQ_MEM_GB, L"C:\\");
    // printf("Total Memory: %dgb", freeMem);

    // printf("Cpu speed: %luMHz", getCpuSpeed());
    
    // playSound("sample.wav");

    while (1) {
        int i = keyGet(KEY_F1);
        if (i == KEY_CLICKED) {
            printf("F1 is pressed\n");
        } else {
            printf("F1 is not pressed\n");
        }
    }
}