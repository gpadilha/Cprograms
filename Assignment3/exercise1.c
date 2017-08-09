#include <stdio.h>

int main(){

	int a[] = {1,2,3,4,5,6};
	int* p = a;
	int total;
	for(int i=0, n=sizeof(a) / sizeof(a[0]); i<n; i++){
		total += *p;
		p++;
	}
	printf("The total is %d\n", total);
	
}