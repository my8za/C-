#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int a = 100;
	char b = 'b';
	void *p = NULL;	// void형 포인터 선언과 초기화
	p = (int*)&a;
//	void형 포인터 p에 int형 변수 a의 주소를 명시적 형변환을 이용하여 대입
	printf("*p = %d \n", *(int*)p);
	p = (char*)&b;
//	void형 포인터 p에 char형 변수 b의 주소를 명시적 형변환을 이용하여 대입
	printf("*p = %c \n", *(char*)p); 
	
} 
