#include <stdio.h>
int a, b, c;
int product(int x, int y);

int main(void)
{
	// 첫번째 수 
	printf("Enter a number between 1 and 100 : ");
	scanf("%d", &a);
	
	// 두번째 수
	printf("Enter another number between 1 and 100 : ");
	scanf("%d", &b); 
	
	// 함수 호출 - 두 수를 곱하고 결과 출력
	c = product(a, b);
	printf("%d * %d = %d \n", a, b, c); 
}

// 두수의 곱 
int product(int x, int y) {
	return(x * y);
} 
