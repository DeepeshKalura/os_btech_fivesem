#include<stdio.h>
#include <unistd.h>
int main(){
	printf("It will be print only once\n");
	fork();
	printf("It will be print two times but I will be changed %d \n", getpid());
	return 0;
}
