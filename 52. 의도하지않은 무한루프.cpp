#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	unsigned long int f;
	int n = 0;
	printf("����� ���� ���� �Է��ϼ��� : ");
	// ���α׷� �ۼ� �� ����ڴ� � ���� �Է��� �� ������ ����ؾ� ��
	scanf("%d", &n);
	f = n;
	printf("%d != ", n);
/* ����� �ƴ� ���� �Էµ� ���, ���� ������ ���� �� ����
while(--n > 0)���� �����ϰ� ���α׷��� ������ �����ϴ� ���� ����*/
	while(--n)
		f *= n;
	printf("%lu \n", f);	
}
