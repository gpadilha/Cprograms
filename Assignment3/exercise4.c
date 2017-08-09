#include <stdio.h>

void printnchars(char ch, int n){
	for(int i=0; i<n; i++){
		printf("%c", ch);
	}
}

int main(){
	printnchars('x',5);
	printf("\n");
	return 0;
}