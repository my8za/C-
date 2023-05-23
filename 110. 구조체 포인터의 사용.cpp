#include <stdio.h>
#pragma warning(disable:4996)

struct student {
	char name[10];
	int kor;
	int math;
};

int main(void) {
	// 구조체 변수 선언 및 초기화 
	struct student hs[4] = {{"KIM HG", 90, 95}, {"LEE SY", 85, 90}, {"PARK GS", 70, 85}, {"CHOI HJ", 95, 75}};
	struct student *p;		// 구조체 포인터 변수 선언
	p = hs;		//구조체 포인터 변수 p에 구조체 배열 첫번째 요소 주소 대입 / p = hs[0]
	
	printf("%s %d %d \n", p -> name, p -> kor, p -> math);	// hs[0]의 멤버 참조 
	p += 3;	  // p의 첨자 + 3 = 3
	printf("%s %d %d \n", p -> name, p -> kor, p -> math);	// hs[3]의 멤버 참조 
	p--;		// p의 첨자 - 1 = 2  
	printf("%s %d %d \n", p -> name, p -> kor, p -> math);	// hs[2]의 멤버 참조 
}
