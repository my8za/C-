#include <stdio.h>
#pragma warning(disable:4996)

int change(int *);		// 함수 원형(프로토타입) 선언 
int main(void) {
	int a = 10;
	int *p = &a;
	printf("함수 호출 이전의 a : %d \n", a);
	change(p);
	printf("함수 호출 이후의 a : %d \n", a);
} 

int change(int *k) {
	*k = *k + *k;
}
