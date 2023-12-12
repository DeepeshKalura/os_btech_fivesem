#include<stdio.h>
#include <stdlib.h>

int main() {
    //inputs
    int n = 8 ,sequence[] = {176, 79, 34, 60, 92, 11, 41, 114}, ip = 50;
    printf("\n");
    int min = 1000, k=9, seek = 0;
    for(int i = 0; i<n; i++) {
        int value = 0; 
        for(int j=0; j<n; j++){
            value = abs(ip - sequence[j]);
            if(value<min){
                min = value;
                // printf("\nmin value %d", min);
                k=j;
            }
        }
        seek += min;
        ip = sequence[k];
        printf("%d\t", sequence[k]);
        sequence[k] = 1000;
        min = 1000;
    }

    printf("\nseek value is %d\n", seek);



}