#include <stdio.h>
#include <stdlib.h>

int main(){
	char c;
	while((c = getchar()) != EOF){
		if(c != '\n'){
			printf("character:%c, decimal value: %d\n", c, c);			
		}
	}

	return 0;
}