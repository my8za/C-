#include <stdio.h>

int main(void) {
	int a = 4, b = 7, c, d, e;
	c = a> 2 && b <= 7;		// ��� ���̹Ƿ� �� ture 1
	printf("c = %d\n", c); 
	d = a < 2 || b <= 7;	// �ϳ��� ���̸� �� true 1
	printf("d = %d\n", d);
	e = !a;		// a(true) ������ false 0
	printf("e = %d\n", e); 
} 
