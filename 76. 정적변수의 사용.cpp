#include <stdio.h>
#pragma warning(disable:4996)

void static_test();		//함수 원형(프로토타입) 선언

int main(void) {
	int i = 0;
	while(i < 5) {
		static_test();	// 함수호출
		i++; 
	}
} 

void static_test () {
	static int s;		// 정적변수는 자동으로 0 초기화
	auto int a = 0;		// 자동변수 선언
	++s;
	++a;
	printf("static s = %d, auto a = %d \n", s, a);  
}
