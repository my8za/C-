#include <stdio.h>
#include <string.h>		// 문자열 처리 라이브러리 
#include <ctype.h>		// 문자 형태 또는 변환 라이브러리 
#pragma warning(disable:4996)

int main(void) {
	int i, alp =0, no = 0, et = 0;
	char s[20];
	printf("문자 입력 : ");
	scanf("%s", s);
	for(i = 0; i < strlen(s); i++) {		// strlen 문자열의 길이 구하기 
		if(isalpha(s[i]))				// isalpha 영문자(알파벳) 여부 
			alp++;
		else if(isdigit(s[i]))		// 숫자의 여부 판별
			no++;
		else 
			et++; 
	}
	
	printf("알파벳 = %d \n", alp);
	printf("숫자 = %d \n", no);
	printf("기타 = %d \n", et);
	
	
	return 0; 
}
