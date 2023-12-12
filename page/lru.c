#include <stdio.h>
#define false 0
#define true 1

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int pageSequence[] = { 7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2, 3 }, n = 14, frame=4;

    int hit[] = {false, false, false, false, false, false, false, false, false, false, false, false, false, false };

    int frameArray[] = {-1,-1,-1,-1};
    int k = 0;

    for (int i = 0; i<n; i++){
        for(int j = 0; j<frame; j++){
            if(frameArray[j] == pageSequence[i]){
                hit[i] = true;
                
                for(int m = j; m<frame-1; m++ ){
                   swap(&frameArray[m], &frameArray[m+1]); 
                }
                printf("\n");
                for(int m = 0; m<frame; m++){
                    printf("%d\t", frameArray[m]);
                }
                printf("\n");
                
 
            }
        }




        if(hit[i]==false){
            k=k%frame;
            frameArray[k++] = pageSequence[i];
            
        }
        
    }

    for(int i = 0; i<n; i++){
        printf("%d\t", hit[i]);
    }
    printf("\n");
    return 0;
}