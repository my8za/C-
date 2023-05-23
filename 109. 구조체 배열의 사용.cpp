#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	
	//구조체 선언 
	struct person {
		char *name;
		int age;
		char sex;
	};
	// 구조체 변수 X(배열) 선언 및 초기화 
	struct person X[3] = {{"홍길동", 30, 'M'}, {"임꺽정", 35, 'M'}, {"황진이", 27, 'F'}};
	
	int i, sum = 0;
	for(i = 0; i < 3; i++) {
		printf("이름 : %s, 나이 : %d, 성별 : %c \n", X[i].name, X[i].age, X[i].sex);		//구조체 배열의 멤버 참조
		sum += X[i].age;
	}
	printf("나이 합 : %d", sum);
	
	return 0;
}
