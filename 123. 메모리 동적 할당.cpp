#include <stdio.h>
#include <stdlib.h>		// ���� �Ҵ� �Լ��� ���� ��� ���� 

int main(void) {
	int *a;
	a = (int*)malloc(sizeof(int));		//��� ���� �Ҵ� 
	if(a == NULL) {
		puts("������ �Ҵ����");	// ������ �Ҵ� ���� ���� �Ǵ�
		exit(1);	 
	} 
	*a = 20;
	 printf("���� ����� ���� a : %d \n", *a);
	 free(a);		// ������ ���� 
} 
