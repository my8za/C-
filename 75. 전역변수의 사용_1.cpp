#include <stdio.h>
#pragma warning(disable:4996)

void fcn1();	// �Լ� ����(������Ÿ��) ����
int x;		// ���� ���� 

int main(void) {
	printf("1) x = %d \n", x);
	fcn1();		// �Լ� ȣ��
	printf("2) x = %d \n", x); 
} 

void fcn1() {		// �Լ� ����
	x++;	// �������� x�� ���� 
}
