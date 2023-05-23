#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	static int a[] = {10, 20, 30, 40 ,50};
	int *pa, b, c, d;
	pa = a;
	b = *pa + *(pa + 4);
	pa += 4;
	c = *pa + *(pa - 4);
	d = *pa + 5;
	printf("b = %d, c= %d, d = %d", b, c, d);	
} 
