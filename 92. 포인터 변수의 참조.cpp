#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int *p, i = 3, j;
	p = &i;		//포인터 변수 p는 변수 i의 주소를 가리킴 
	j = *p;		//포인터 변수 p가 가리키는 번지의 내용을 변수j에 대입
	j++;		// j 1 증가 
	printf("*p = %d \n", *p); 	//3
	printf("p = %x \n", p); 	//i의 주소값 
	printf("j = %d \n", j); 	//4
} 
