#include <stdio.h>

int main(void) {
	int x = 50, y = 30;
	printf("x가 y가 같은가? : %d\n", x == y);
	printf("x가 y가 다른가? : %d\n", x != y);
	printf("x가 y가 크거나 같은가? : %d\n", x >= y); 
	printf("x가 y가 작거나 같은가? : %d\n", x <= y);
	printf("x에 y값을 넣으면? : %d\n", x = y);
	if (x == y) {
		// 참일때 실행 
	} else {
		// 거짓일때 실행 
	}
	return 0;
}
