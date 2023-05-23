#include <stdio.h>
#pragma warning(disable:4996)

void fcn1();	// 함수 원형(프로토타입) 선언
int x;		// 전역 변수 

int main(void) {
	printf("1) x = %d \n", x);
	fcn1();		// 함수 호출
	printf("2) x = %d \n", x); 
} 

void fcn1() {		// 함수 정의
	x++;	// 전역변수 x의 증가 
}
