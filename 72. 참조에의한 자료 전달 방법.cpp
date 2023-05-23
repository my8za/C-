#include <stdio.h>
#pragma warning(disable:4996)

/* 참조에 의한 자료 전달 방법 */ 

void swap(int *x, int *y);		//함수 원형(프로토타입) 선언/ 매개변수값으로 포인터 변수 

int main(void) { 
	int a = 3, b = 5;
	printf("호출 전 a = %d, b = %d \n", a, b);
	swap(&a, &b); 	// 변수 a, b의 메모리 주소 값 전달
	printf("호출 후 a = %d, b = %d \n", a, b); 
} 

void swap(int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	printf("swap 함수 내부 x = %d, y = %d \n", *x, *y);
}
