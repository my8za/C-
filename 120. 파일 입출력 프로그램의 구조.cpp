#include <stdio.h>
#pragma warning(disable:4996)

// ���� ����� ���α׷��� ���� 

int main(void) {
	char ch;
	FILE *fp;		// ���� ������ ����  FILE�� ����ü������ �Ǿ���dmau <stdio.h>�� ���ǵǾ����� 
	fp = fopen("sample.txt", "w");	// sample.txt ���� open
	for(ch = 'A'; ch <= 'Z'; ch++) 
		fputc(ch, fp);	// �ڷ� ���
	fclose(fp);		// ���� close 
	 
}
