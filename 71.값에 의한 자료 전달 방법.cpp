#include <stdio.h>
#pragma warning(disable:4996)

/* ���� ���� �ڷ� ���� ��� */

void swap(int x, int y);		// �Լ� ���� ���� 

int main(void) {
	int a = 3, b = 5;
	printf("ȣ�� �� a = %d, b = %d \n", a, b);
	swap(a, b);
	printf("ȣ�� �� a = %d, b = %d\n", a, b);	// ���� ������ Ư������ ���� �� ���� 
}

void swap(int x, int y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("swap �Լ� ���� x = %d, y = %d \n", x, y);
}
