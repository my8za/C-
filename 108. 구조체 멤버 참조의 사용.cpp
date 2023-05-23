#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

// 이름이 person 구조체 선언
struct person {
	char name[8];
	int age;
	char sex;
};

int main(void) {
	struct person X = {"홍길동", 30, 'M'};			// 구조체 변수 X 선언과 초기화 
	struct person Y; 		// 구조체 변수 Y 선언
	strcpy(Y.name, "임꺽정");		// Y의 구조체 멤버 name 참조, strcpy() : 문자열 복사 함수 
	Y.age = 35;
	Y.sex = 'M';
	
	printf("X의 정보 : %s, %d, %c\n", X.name, X.age, X.sex);
	printf("Y의 정보 : %s, %d, %c\n", Y.name, Y.age, Y.sex); 
	printf("sizeof(person.name) : %dbyte \n", sizeof(X.name));		//구조체 멤버변수 name의 메모리크기 
	printf("sizeof(person.age) : %dbyte \n", sizeof(X.age));		//구조체 멤버변수 name의 메모리크기 
	printf("sizeof(person.sex) : %dbyte \n", sizeof(X.sex));		//구조체 멤버변수 name의 메모리크기 
	printf("sizeof(person) : %dbyte \n", sizeof(X));		// 구조체 자체의 크기 : 메모리 할당 될때에 멤버 중에서 가장 큰 자료형의 크기로 할당된다 
	
	return 0;
} 
