#include <stdio.h>
#include "getline.c"

int main(){
	char str[10];
	printf("%d\n", mygetline(str , 10));

	return 0;
}