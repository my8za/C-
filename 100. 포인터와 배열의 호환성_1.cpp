#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	char A[] = "CSKNOU";
	char *p = A;
	int i;
	int size = sizeof(A);
	for(i = 0; i < size - 1; i++) 
		printf("*(A + %d) : %c \n", i, *(A + i));	// p[i]와 같음 
	for(i = 0; i < size -1; i++)
		printf("p[%d] : %c \n", i, p[i]);		// *(A + i)와 같음 
	
	
	return 0;
}
