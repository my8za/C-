#include <stdio.h>
#pragma warning(disable:4996)

void extern_ex();	// �Լ� ����(������Ÿ��) ����
char s[100];

int main(void) {
	printf("���ڿ� �Է� : ");
	scanf("%s", s);
	printf("�Է¹޴� ���ڿ� %s�� �������� s�� ����Ǿ����ϴ�.\n", s);
	extern_ex();	// �Լ�ȣ�� 
}

