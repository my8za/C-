#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	char str_in[50], str_out[50];		// ���ڿ� ������ ���� �迭 ���� 
	int i = 0;
	printf("���ڿ� �Է� : ");
	scanf("%s", str_in);
	do {
		str_out[i] = '*';		// str_in �迭�� ���ڸ� '*'��  �����Ͽ� str_out �迭�� ����
		i++; 
	} while(str_in[i] != '\0');	//�迭�� i ��°�� null�� ���������� 
	str_out[i] = '\0';		//���ڿ� ���� ��Ÿ���� null ���� ����
	printf("�Է� ���ڿ� �迭 str_in = %s \n", str_in); 
	printf("��� ���ڿ� �迭 str_out = %s \n", str_out);
	
	return 0;
} 
