#include <stdio.h>
#pragma warning(disable:4996)

// ��Ÿ���� ���� a���� = b���� + c���� 

int main(void) {
	int a, b, c, n;
	printf("maximum value = ?");
	scanf("%d", &n);
	printf("A\t B\t C\n");
	for (a = 1; a <= n; a++) {
		for(b = 1; b <= n; b++) {
			for(c = 1; c <= n; c++) {
				if (a * a == b * b + c * c)
					printf("%d\t%d\t%d\t \n", a, b, c);
			}
		}
	}
} 
