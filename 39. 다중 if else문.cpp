#include <stdio.h>

int main(void) {
	int a;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &a);
	if(a >= 0)
		if(a == 0)
			printf("�Էµ� ���� 0");
		else
			printf("�Էµ� ���� ���");
	else
		printf("�Էµ� ���� ����"); 
} 
