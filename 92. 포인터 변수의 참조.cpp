#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int *p, i = 3, j;
	p = &i;		//������ ���� p�� ���� i�� �ּҸ� ����Ŵ 
	j = *p;		//������ ���� p�� ����Ű�� ������ ������ ����j�� ����
	j++;		// j 1 ���� 
	printf("*p = %d \n", *p); 	//3
	printf("p = %x \n", p); 	//i�� �ּҰ� 
	printf("j = %d \n", j); 	//4
} 
