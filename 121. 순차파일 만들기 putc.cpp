#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

 // �������� �����
 
 int main(void) {
 	FILE *fp;	// ���������� ����
	char c;
	fp = fopen("sample1.txt", "w");		//sample1.txt������ �ؽ�Ʈ����, ������� ����
	
	if(fp == NULL) {	// ���� ���� ���� üũ
		printf("������ ������ �� �����ϴ�");		// ���� �޽��� ���
		exit(1);		// ���α׷� ���� 
	} 
	printf("���ڿ��� �Է��Ͻÿ�, �Է��� �������� ctrl + z �����ÿ�. \n");
	while((c = getchar()) != EOF)		// ���� ����� ���� �Ǻ�
  		putc(c, fp);		// ���ڸ� ���Ϸ� ��� 
	fclose(fp);		// ���ϴݱ� 
 } 
