#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int x = 2,  y = 4;		
	printf("A : x = %d, y = %d \n", x, y);	// 블록A의 x, y 
	{
		int x;		// 블록B의 x 
		x = 5;		 
		y++;		// 블록A의 y 증가
		printf("B : x = %d, y = %d \n", x, y);		// 블록B의 x, 블록 A의 y 
	}
	printf("A : x = %d, y = %d \n", x, y);		// 블록A의 x, y 
	
	return 0;
} 
