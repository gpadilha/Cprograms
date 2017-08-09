#include <stdio.h>

int factorial(int x){
	if(x == 1){
		return x;
	}
	return factorial(x-1) * x;
}

int main(){
	for(int i=1; i<=10; i++){
		printf("factorial of %d = %d\n", i, factorial(i));
	}

	return 0;
}