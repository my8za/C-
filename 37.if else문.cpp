#include <stdio.h>

int main(void) {
	int a;
	printf("�����Է�(1  ~ 200) : ");
	scanf("%d", &a);
	if(a < 100)
		printf("�Է��� ����(%d)�� 100���� ���� \n", a);
	else
		printf("�Է��� ����(%d)�� 100���� ŭ \n", a);
	printf("���α׷� ���� \n"); 
	return 0;
} 
