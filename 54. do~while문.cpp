#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int i = 0, n;
	int sum = 0;
	printf("n = ?");
	scanf("%d", &n);
	do {
		sum += i;
		i++;
	} while(i <= n);	// �����ݷ��� ���� ������ ���� �߻�
	printf("i = %d \n", i);
	printf("i ~ %d���� �� = %d \n", n, sum);
	 
} 
