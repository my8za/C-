#include <stdio.h>
#pragma warning(disable:4996)

//반환 자료형이 struct num 
// struct num형의 구조체를 매개변수로 갖는 calc 함수 
struct num calc(struct num num2);	// 구조체 함수 원형(프로토타입) 선언, 

struct num{
	int x;
	int y;
	int sum;
	int mul;
}; 

int main(void) {
	struct num num1;	// 구조체 변수 선언 
	num1.x = 10;
	num1.y = 20;
	num1 = calc(num1);		// calc함수에 매개변수로 num1 구조체를 넘겨줌
	
	printf("x : %d, y : %d, sum : %d, mul : %d \n", num1.x, num1.y, num1.sum, num1.mul); 
}

struct num calc(struct num num2) {
	// 매개변수 num2로 넘겨받아 구조체의 멤버끼리 계산 
	num2.sum = num2.x + num2.y;
	num2.mul = num2.x * num2.y;
	return(num2);	//구조체 리턴 
}
