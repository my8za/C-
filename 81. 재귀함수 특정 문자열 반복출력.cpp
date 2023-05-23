#include <stdio.h>
#pragma warning(disable:4996)

// 재귀함수를 이용하여 특정 문자열 반복 출력  
// 재귀함수(Recursive Function) : 자기가 자기자신을 포함하는 형태 

void print(int);	// 함수 원형(프로토타입) 선언
 
int main(void) {
	 int num;
	 printf("문자열을 몇번 출력할까요? : ");
	 scanf("%d", &num);
	 print(num); 
	
	return 0;
}

void print(int count) {		// 함수 정의 
	if(count ==  0)
		return;
	else{
		printf("문자열을 출력합니다.\n");
		print(count - 1);		// 함수 내부에서 동일 함수(자기자신) 호출 
	}
} 

/* 재귀함수 
for문이나 while문을 사용하지 않더라도 재귀함수를 통하여 반복적으로 수행가능하다. 
*/ 
