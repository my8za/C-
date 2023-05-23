#include <stdio.h>
#pragma warning(disable:4996)

void extern_ex();	// 함수 원형(프로토타입) 선언
char s[100];

int main(void) {
	printf("문자열 입력 : ");
	scanf("%s", s);
	printf("입력받는 문자열 %s는 전역변수 s에 저장되었습니다.\n", s);
	extern_ex();	// 함수호출 
}

