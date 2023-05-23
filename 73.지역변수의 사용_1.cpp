#include <stdio.h>
#pragma warning(disable:4996)

void fcn1();	// 함수 원형(프로토타입) 선언 

int main(void) {
	int i = 10;		// main의 지역변수
	printf("main i = %d \n", i);
	fcn1();		// 함수 호출 
	printf("main i = %d \n", i); 
}

void fcn1 () {
	int i;		// fcn1의 지역 변수 
	i = 20;
	printf("fcn1 i = %d\n", i); 
}
