#include <stdio.h>
#pragma warning(disable:4996)

int score_sum(int gr[], int);	// 함수 원형(프로토타입 선언) 

int main(void) {
	int score[5] = {10, 20, 30, 40, 50};	//1차원 배열 선언과 초기화
	int sum;	// 지역변수
	sum = score_sum(score, 5);		// 함수호출
	printf("sum = %d\n", sum);
	printf("score[0] = %d \n", score[0]); 	// 참조에 의한 전달 
	return 0;
}

int score_sum (int gr[], int size) {		// 함수 정의 
	int sum = 0;		// 지역변수
	int i;
	for(i = 0; i < size; i++)
		sum += gr[i];
	gr[0] = 0;
	return sum;
} 
