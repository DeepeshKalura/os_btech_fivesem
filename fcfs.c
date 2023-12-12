#include <stdio.h>
#include <stdlib.h>


struct process {
	int pName;
	int aT;
	int bT;
	int cT;
        int tAT;
        int wT;
};

int compare(const void *s1, const void *s2) {
	struct process *p1 = (struct process *)s1;
	struct process *p2 = (struct process *)s2;

	return ( (p1->aT) - (p2->aT) );

}




int main(){
	
	int n = 4;

	struct process pArray[n];
	int aT[] = {2,0,4,3};
	int bT[] = {7,5,6,8};

	// intializing the process
	for (int i = 0; i<n; i++ ){
		
		pArray[i].pName = i+1;
		//mTimeArray[i].pName = i+1;
		pArray[i].aT = aT[i];
		pArray[i].bT = bT[i];
		pArray[i].cT = 0;
		pArray[i].tAT = 0;
		pArray[i].wT = 0;

	}


	// sort the struct
	qsort(pArray, n, sizeof(struct process), compare);

	//for (int i = 0; i<n; i++){
	//	printf("%d \n",pArray[i].aT);
	//}

	// fcfs start
	// step 1: filling the gantt chart
	int gantt[n];
	int sum = 0;
	for(int i = 0; i<n; i++){
		gantt[i] = sum + pArray[i].bT;
		sum = gantt[i];
	}

//	for(int i= 0; i<n; i++){
//		printf("%d,\n",gantt[i]);
//	}

	// step 2: filling the complete time, turn around time and waiting time
	// complete time assumption hai same as gannt value hai
	// turn around time = complete time - arrival time
	// waiting time = turn around time - burst time
	

	for(int i = 0; i<n; i++){
		
		pArray[i].cT = gantt[i];

		pArray[i].tAT = pArray[i].cT - pArray[i].aT;
		pArray[i].wT = pArray[i].tAT - pArray[i].bT;
	}

	printf("PN\tAT\tBT\tCT\tTAT\tWT\t\n");
                printf("\n");


	for (int i = 0; i<n; i++){
		printf("P%d\t%d\t%d\t%d\t%d\t%d\n", pArray[i].pName, pArray[i].aT, pArray[i].bT, pArray[i].cT, pArray[i].tAT, pArray[i].wT);
	}



	return 0;
}
