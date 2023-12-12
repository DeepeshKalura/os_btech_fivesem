#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


int main(){

	int n = 6, r;
	int arr[] = {1,2,3,4,5,6};

	// int n;
	// printf("Enter the number of element:	");
	// scanf("%d", &n);
	// printf("Enter the element in an array\n:);
	// int arr[n];
	// for(int i = 0; i<n; i++){
	//	scanf("%d", arr[i];
	// }
	
	r = fork();
	
	if(r==0){
		int sum = 0;
		for (int i = 0; i<n; i++){
			if(arr[i] %2 == 0){
				sum += arr[i];
			}
		}
		printf("The sum of even process by the parent process is %d , pip id of process is %d\n", sum, getpid());
	}else {
		int sum = 0;
		for (int i = 0; i<n; i++) {
			if(arr[i] %2 != 0){
				sum += arr[i];
			}

		}
		printf("The sum of odd process by the child process is %d\n, pip id of process is %d\n", sum, getpid());
	}

	return 0;
}

