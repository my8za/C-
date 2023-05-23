#include <stdio.h>
#include <stdlib.h>		// 동적 할당 함수를 위한 헤더 파일 

int main(void) {
	int *a;
	a = (int*)malloc(sizeof(int));		//기억 공간 할당 
	if(a == NULL) {
		puts("기억공간 할당실패");	// 기억공간 할당 성공 여부 판단
		exit(1);	 
	} 
	*a = 20;
	 printf("힙에 저장된 변수 a : %d \n", *a);
	 free(a);		// 기억공간 해제 
} 
