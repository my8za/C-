#include <stdio.h>
#pragma warning(disable:4996)

int max(int x, int y);		// �Լ� ���� ����
int min(int x, int y);		// �Լ� ���� ���� 

int main(void) {
	int i, j;
	printf("���� 2�� �Է� : ");
	scanf("%d %d", &i, &j);
	printf("max(%d, %d) = %d \n", i, j, max(i, j)); 
	printf("min(%d, %d) = %d \n", i, j, min(i, j)); 
} 

int max(int x, int y) {
	return (x > y ? x : y);
}

int min(int x, int y) {
	return (x > y ? y : x);
}
