#include <stdio.h>

struct Max {
    int a,b,c;
};

struct Available {
    int a,b,c;
};

struct Allocated {
    int a,b,c;
};

struct Process {
    struct Max max;
    struct Allocated allocated;
    struct Available available;
};

int main(){
    int resourceTotal[] = {10, 5, 7};

    struct Process processes[5];

    processes[0].max.a = 7;
    processes[0].max.b = 5;
    processes[0].max.c = 3;

    processes[0].allocated.a = 0;
    processes[0].allocated.b = 1;
    processes[0].allocated.c = 0;

    processes[0].available.a = resourceTotal[0] - processes[0].allocated.a;
    processes[0].available.b = resourceTotal[1] - processes[0].allocated.b;
    processes[0].available.c = resourceTotal[2] - processes[0].allocated.c;

    // Initializing values for process 1
    processes[1].max.a = 3;
    processes[1].max.b = 2;
    processes[1].max.c = 2;

    processes[1].allocated.a = 2;
    processes[1].allocated.b = 0;
    processes[1].allocated.c = 0;

    processes[1].available.a = resourceTotal[0] - processes[1].allocated.a;
    processes[1].available.b = resourceTotal[1] - processes[1].allocated.b;
    processes[1].available.c = resourceTotal[2] - processes[1].allocated.c;

    





    return 0;
}