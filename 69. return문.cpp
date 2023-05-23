#include <stdio.h>
#pragma warning(disable:4996)

int max(int x, int y);		// 함수 원형 선언
int min(int x, int y);		// 함수 원형 선언 

int main(void) {
	int i, j;
	printf("정수 2개 입력 : ");
	scanf("%d %d", &i, &j);
	printf("max(%d, %d) = %d \n", i, j, max(i, j)); 
	printf("min(%d, %d) = %d \n", i, j, min(i, j)); 
} 

int max(int x, int y) {
	return (x > y ? x : y);
}

int min(int x, int y) {
	return (x > y ? y : x);
}
