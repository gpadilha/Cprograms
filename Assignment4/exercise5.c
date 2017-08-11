#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "getline.c"

int main(){
	char *dep = "deposit";
	char *chk = "check";

	char line[255];
	float balance = 0;
	int op = 1;

	while(mygetline(line, 255) != EOF){
		if (strcmp(line, dep) == 0){
			op = 1;
		}else if(strcmp(line, chk) == 0){
			op = -1;
		}else{
			balance += op * atof(line);
			printf("balance: %f\n", balance);
		}
	}

	return 0;
}