#include <stdio.h>

void main() {
	int b[100];
	printf("Enter three process's burst time:\n");
	for (int i = 0; i < 3; i++) {
    	scanf("%d", &b[i]);
	}
           for (int i = 0; i < 3 - 1; i++) {
    	for (int j = 0; j < 3 - i - 1; j++) {
        	if (b[j] > b[j + 1]) {
            	int temp = b[j];
            	b[j] = b[j + 1];
            	b[j + 1] = temp;
        	}}}

	float wt = 0;
	float avt = 0;
	float tt = 0;
           for (int i = 0; i < 3; i++) {
    	printf("Waiting time of process %d is %f\n", i + 1, wt);
    	printf("Turnaround time of process %d is %f\n", i + 1, wt + b[i]);
  	 
    	tt = wt + b[i] + b[i];
    	avt = avt + wt;
    	wt = wt + b[i];
	}
   
	avt = avt / 3;
	printf("Average waiting time is: %f\n", avt);
}
