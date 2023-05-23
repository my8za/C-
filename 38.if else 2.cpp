#include <stdio.h>

int main(void) {
	int a;
	printf("정수를 입력하세요 : ");
	scanf("%d", &a);
	if(a % 2 == 0)
	{
		printf("입력한 정수는 %d입니다. \n", a);
		printf("%d는 짝수입니다 \n", a);
	} 
	else
	{
		printf("입력한 정수는 %d입니다. \n", a);
		printf("%d는 홀수입니다. \n", a);
	}
} 
