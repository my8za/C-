#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main(void) {
	char s[] = "1235446";
	printf("memset() 실행 전s의 데이터 : %s \n", s);
	memset(s, '*', strlen(s));
	printf("memset() 실행 후 s의 데이터 : %s \n", s);
} 
