#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	char a = 'A', *p, **pp;
	p = &a;
	pp = &p;
	printf("**pp = %c\n", **pp);
	printf("*p = %c\n", *p);
	
	return 0;
} 
