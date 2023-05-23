#include <stdio.h>
#pragma warning(disable:4996)

// 함수의 매개변수로 구조체를 사용할 경우, 일반적으로 구조체 포인터를 사용한다.  -> 실행 속도 향상, 기억공간 사용 효율 好 

struct num calc(struct num *num2);		// 구조체 함수 원형(프로토타입) 선언

// num 구조체 선언
struct num {
	int x;
	int y;
	int sum;
	int mul; 
};

int main(void) {
	struct num num1;		// 구조체 변수 선언
	num1.x = 10;
	num1.y = 20;
	calc(&num1);		// 구조체 함수 calc 호출(인자 : 구조체 num의 메모리주소)
	printf("x : %d, y : %d, sum : %d, mul : %d \n", num1.x, num1.y, num1.sum, num1.mul);
	
	return 0;
}

struct num calc(struct num *num2) {		// 구조체 함수 calc 정의 
	num2 -> sum = num2 -> x + num2 -> y;
	num2 -> mul = num2 -> x * num2 -> y; 
}

/* 포인터 연산자(->) 사용
 (*num2).x = num2 -> x 
 멤버 연산자(.) 사용 참조의 경우에는 괄호가 필요
 .는 *보다 연산의 우선순위가 높기때문 */
