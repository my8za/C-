#include <stdio.h>
#pragma warning(disable:4996)

void fcn1();	// �Լ� ����(������Ÿ��) ���� 

int main(void) {
	int i = 10;		// main�� ��������
	printf("main i = %d \n", i);
	fcn1();		// �Լ� ȣ�� 
	printf("main i = %d \n", i); 
}

void fcn1 () {
	int i;		// fcn1�� ���� ���� 
	i = 20;
	printf("fcn1 i = %d\n", i); 
}
