#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int a = 100;
	char b = 'b';
	void *p = NULL;	// void�� ������ ����� �ʱ�ȭ
	p = (int*)&a;
//	void�� ������ p�� int�� ���� a�� �ּҸ� ����� ����ȯ�� �̿��Ͽ� ����
	printf("*p = %d \n", *(int*)p);
	p = (char*)&b;
//	void�� ������ p�� char�� ���� b�� �ּҸ� ����� ����ȯ�� �̿��Ͽ� ����
	printf("*p = %c \n", *(char*)p); 
	
} 
