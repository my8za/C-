#include <stdio.h>
#pragma warning(disable:4996)

/* 값에 의한 자료 전달 방법 */

void swap(int x, int y);		// 함수 원형 선언 

int main(void) {
	int a = 3, b = 5;
	printf("호출 전 a = %d, b = %d \n", a, b);
	swap(a, b);
	printf("호출 후 a = %d, b = %d\n", a, b);	// 지역 변수의 특성으로 원래 값 유지 
}

void swap(int x, int y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("swap 함수 내부 x = %d, y = %d \n", x, y);
}
