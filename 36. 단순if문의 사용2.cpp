#include <stdio.h>

int main(void) {
	int a = 10, b = 10;
	printf("if�� ���� �� : a = %d, b = %d \n", a, b);
	if(a > b) {	
		a = a + 20;
		printf("a = %d \n", a);
	}
	b += 20;
	printf("if�� ���� �� : a = %d, b = %d \n", a, b);
}
