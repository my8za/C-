#include <stdio.h>
#pragma warning(disable:4996)

/*  함수 원형 선언이 필요없는 경우 

int sum1(int a, int b) {		// 사용자정의함수가 main함수 이전에 정의됨 
	return (a + b); 
}

int main(void) {
	printf("sum = %d\n", sum1(10, 20));
}
*/




// 함수 원형 선언이 필요한 경우
int sum2(int x, int y);		// 원형 선언

int main(void) {
	printf("sum = %d\n", sum2(20, 30));
} 
 
int sum2(int x, int y) {		// 사용자 정의함수가 main함수 이후에 정의됨 
	return (x + y);
}
