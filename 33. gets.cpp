#include <stdio.h>

int main(void) {
	char s[50];
	printf("���ڿ� �Է�? ");
	gets(s);
	printf("gets()�� ���ڿ� �Է� = %s \n", s);
	printf("\n���ڿ� �Է�?");
	scanf("%s", s) ;
	printf("scanf()�� ���ڿ� �Է� = %s \n", s);
}
