#include <stdio.h>
#include "getline.c"

int main(){
	char c;
	char line[256];

	while(mygetline(line, 256) != EOF){
		printf("%s\n", line);
	}

	//character-copying
	while((c = getchar()) != EOF){
		putchar(c); 
	}

	return 0;
}

	

	