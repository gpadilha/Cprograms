#include <stdio.h>
#include <stdlib.h>
#include "getline.c"

#define N_NUMBERS 5
#define NUM_SIZE 4 //3 digits

int main(){

	char line[NUM_SIZE];
	int total = 0;
	
	for(int i=0; i<N_NUMBERS; i++){
		mygetline(line, NUM_SIZE);
		total += atoi(line);
	}

	printf("Average is: %f\n", (float)total/N_NUMBERS);

	return 0;
}