#include <stdio.h>

int main(void) 
 {
 	int n;
	printf("n = ?");
	scanf("%d", &n);
	printf("n %% 5 = %d\n", n % 5);	//%%�� %���� ��ü�� ���
	switch(n % 5) {
		case 0: printf("�������� 0\n");
		break; 
		case 1: printf("�������� 1\n");
		break;
		case 2: printf("�������� 2\n");
		break;
		default: printf("�������� 3�̳� 4 \n");
		break;
	} 
	return 0;
} 
