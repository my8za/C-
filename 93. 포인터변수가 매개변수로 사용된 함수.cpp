#include <stdio.h>
#pragma warning(disable:4996)

int change(int *);		// �Լ� ����(������Ÿ��) ���� 
int main(void) {
	int a = 10;
	int *p = &a;
	printf("�Լ� ȣ�� ������ a : %d \n", a);
	change(p);
	printf("�Լ� ȣ�� ������ a : %d \n", a);
} 

int change(int *k) {
	*k = *k + *k;
}
