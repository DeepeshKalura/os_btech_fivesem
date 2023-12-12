#include <stdio.h>
#define false 0
#define true 1


int main() {
    int pageSequence[] = { 7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2, 3 }, n = 14, frame=4;
    int frameArray[] = {-1,-1,-1, -1};

    int hit[] = {false, false, false, false, false, false, false, false, false, false, false, false, false, false };
    int k = 0;
    for (int i = 0; i<n; i++){
        for(int j = 0; j<frame; j++){
            if(frameArray[j] == pageSequence[i]){
                hit[i] = true;
            }


        }

        if(hit[i]==false){
            k=k%frame;
            frameArray[k] = pageSequence[i];
            k++;
        }

        
    }    

    for(int i = 0; i<n; i++){
        printf("%d\t", hit[i]);
    }
    printf("\n");

}