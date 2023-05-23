#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

 // 순차파일 만들기
 
 int main(void) {
 	FILE *fp;	// 파일포인터 선언
	char c;
	fp = fopen("sample1.txt", "w");		//sample1.txt파일을 텍스트파일, 쓰기모드로 개방
	
	if(fp == NULL) {	// 파일 개방 에러 체크
		printf("파일을 개방할 수 없습니다");		// 에러 메시지 출력
		exit(1);		// 프로그램 종료 
	} 
	printf("문자열을 입력하시오, 입력을 끝내려면 ctrl + z 누르시오. \n");
	while((c = getchar()) != EOF)		// 문자 출력의 끝을 판별
  		putc(c, fp);		// 문자를 파일로 출력 
	fclose(fp);		// 파일닫기 
 } 
