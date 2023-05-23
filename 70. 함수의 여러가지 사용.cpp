#include <stdio.h>
#pragma warning(disable:4996)

int sum(int, int);		//함수 원형(프로토타입) 선언

void test();	 	//함수 원형 선언 

int main(void) {
	int s;
	test();		// 함수 단순 호출 
	sum(10, 20);	//함수 단순  호출 (저장X) 
	s = sum(30, 40);   // 함수호출하여 반환값 변수 s에 저장
	printf("sum from 30 to 40 = %d \n", s);
	printf("sum from 100 to 200 =%d \n", sum(100, 200));	// 함수 호출 결과를 직접사용 
	 
	return 0;
} 

void test() {
	printf("함수의 여러가지 사용 방법\n");
} 

int sum(int a, int b) {
	int i, s = 0;
	for(i = a; i <= b; i++)
		s += i;
	return s;
}
