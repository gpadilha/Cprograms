#include <stdio.h>
#include "getline.c"

int reverse(char line[], int len){	
	for(int i=0; i<len; i++){
		printf("%c", line[len - i - 1]);
	}
	printf("\n");
	return 0;
}

int main(){
	char line[10];
	mygetline(line, 10);
	reverse(line, 10);

	return 0;
}