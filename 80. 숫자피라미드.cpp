#include <stdio.h>
#pragma warning(disable:4996)

// 반복함수를 이용해서 숫자 피라미드 출력 
// 반복함수와 같은 경우는 오직  for문과 while문으로 구성

int print(int a);	//함수 원형(프로톹타입) 선언 
 
int main(void) {
	int a;
	scanf("%d", &a);
	print(a);		// 함수 호출 
	return 0;

}

int print(int a) {
	int i, j;
	for(i = 0; i < a; i++) {
		for(j = 0; j <= i ; j++) {
			printf("%d", j + 1);
		}
		printf("\n");
	}
} 
