#include <stdio.h>

int main(void) {
	int a;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &a);
	if(a % 2 == 0)
	{
		printf("�Է��� ������ %d�Դϴ�. \n", a);
		printf("%d�� ¦���Դϴ� \n", a);
	} 
	else
	{
		printf("�Է��� ������ %d�Դϴ�. \n", a);
		printf("%d�� Ȧ���Դϴ�. \n", a);
	}
} 
