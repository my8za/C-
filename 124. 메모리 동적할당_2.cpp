#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main(void) {
	int size;	// �Է¹��� ���� �� ���� ����
	char *str;	//���� �Ҵ�� �������� ������ ������
	printf("���ڿ��� ũ�� �Է� :");
	scanf("%d", &size);		
	str = (char*)malloc(size + 1);	//�Է¹��� ���� ��(size +1)�� �°� ���� �Ҵ�
	if(str == NULL) {
		puts("��� ���� �Ҵ� ����");
		exit(1);
	} 
	printf("���ڿ��� �Է� : ");
	scanf("%s", str);	// �������� �Ҵ�� �������� ���ڿ� ���� 
	printf("�����Ҵ�� �޸𸮿� ����� ���ڿ� : %s\n", str);
	free(str);		//������ ���� 
	return 0;
}
