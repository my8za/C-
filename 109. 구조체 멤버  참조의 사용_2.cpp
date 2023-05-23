#include <stdio.h>
#pragma warning(disable:4996)

//  struct person을 man이라는 새로운 자료형으로 정의 
typedef struct person {
	char name[8];
	int age;
	char sex;
} man; 


// 이름이 department인 구조체 선언
struct department {
	char deptname[20];
	// 구조체 멤버로 man 자료형(person구조체) 변수를 가짐 
	man person1;
	man person2;
	man person3;
	int member;
}; 

int main(void) {
	//구조체형 변수 선언과 동시에 초기화 
	struct department accounting = {"Accounting", 
	{"홍길동", 30, 'M'}, 
	{"임꺽정", 35, 'M'}, 
	{"황진이", 27, 'F'}, 
	3};
	
	printf("person1의 정보 : %s, %d, %c \n", accounting.person1.name, accounting.person1.age, accounting.person1.sex);
	printf("person2의 정보 : %s, %d, %c \n", accounting.person2.name, accounting.person2.age, accounting.person2.sex);
	printf("person3의 정보 : %s, %d, %c \n", accounting.person3.name, accounting.person3.age, accounting.person3.sex);
	
	
	return 0;
} 
