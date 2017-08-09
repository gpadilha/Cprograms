#include <stdio.h>

int square(int x){
	return (x) * (x);
}
int main(){

	for(int i=1; i<=10; i++){
		printf("square of %d = %d\n", i, square(i));
	}

	return 0;
}