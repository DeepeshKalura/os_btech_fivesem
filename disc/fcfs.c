#include <stdio.h>
#include <stdlib.h>

int main(){

    
    int n = 8, ip = 50;
    int intialArray[] = {176, 79, 34, 60, 92, 11, 41, 114};

    // for(int i = 0; i<n; i++){
        // scanf("%d", &intialArray[i]);
    // }

    // algorithm for fcfs 
    int seek = 0;
    printf("seek sequence:  \n");
    for(int i = 0; i<n; i++){
        seek += abs(ip- intialArray[i]);
        ip = intialArray[i];
        printf("%d\t", ip); 
    }

    printf("\nseek value is %d\n", seek);
    

    return 0;
}

