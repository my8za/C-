#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

struct person {
	char name[20];
	char sex;
	int age;
}; 

typedef struct person MAN;		// person형 구조체를 MAN형으로 정의
typedef unsigned char CHAR;		// unsigned char를 새로운 CHAR로 정의
typedef int* PTR;		// int*를 PTR로 정의


// main 함수
int main(void) {
	MAN member;		// struct man member 동일 
	CHAR data;		// unsigned char 동일 
	PTR pt;			// int *pt 동일 
	strcpy(member.name, "홍길동");		// person형 구조체 MAN의 멤버 초기화
	member.sex = 'M';
	member.age = 30;
	data = 100;		// unsigned char data에 100 대입
	pt = &(member.age);		// person구조체의 age의 메모리주소를 int *pt에 대입
	printf("*pt = %d\n", *pt); 
	 
	return 0;
} 
