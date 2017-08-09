#include <stdio.h>

float f2c(float x){
	return (float)5/9 * (x - 32);
}

int main(){
	for(int i=-40; i<=200; i+=10){
		printf("%d fahrenheit = %f celcius\n", i, f2c(i));
	}
	return 0;
}