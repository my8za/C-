#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int x = 2,  y = 4;		
	printf("A : x = %d, y = %d \n", x, y);	// ���A�� x, y 
	{
		int x;		// ���B�� x 
		x = 5;		 
		y++;		// ���A�� y ����
		printf("B : x = %d, y = %d \n", x, y);		// ���B�� x, ��� A�� y 
	}
	printf("A : x = %d, y = %d \n", x, y);		// ���A�� x, y 
	
	return 0;
} 
