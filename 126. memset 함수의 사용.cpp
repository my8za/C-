#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main(void) {
	char s[] = "1235446";
	printf("memset() ���� ��s�� ������ : %s \n", s);
	memset(s, '*', strlen(s));
	printf("memset() ���� �� s�� ������ : %s \n", s);
} 
