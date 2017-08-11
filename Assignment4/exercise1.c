#include <stdio.h>

int main(){

	char c; //declare the variable c type char

	//while is not end of the line, get character by character
	while((c = getchar()) != EOF){
		//output the current character in the interation
		putchar(c); 

	}

	return 0;
}
