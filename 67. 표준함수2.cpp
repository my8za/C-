#include <stdio.h>
#include <string.h>		// ���ڿ� ó�� ���̺귯�� 
#include <ctype.h>		// ���� ���� �Ǵ� ��ȯ ���̺귯�� 
#pragma warning(disable:4996)

int main(void) {
	int i, alp =0, no = 0, et = 0;
	char s[20];
	printf("���� �Է� : ");
	scanf("%s", s);
	for(i = 0; i < strlen(s); i++) {		// strlen ���ڿ��� ���� ���ϱ� 
		if(isalpha(s[i]))				// isalpha ������(���ĺ�) ���� 
			alp++;
		else if(isdigit(s[i]))		// ������ ���� �Ǻ�
			no++;
		else 
			et++; 
	}
	
	printf("���ĺ� = %d \n", alp);
	printf("���� = %d \n", no);
	printf("��Ÿ = %d \n", et);
	
	
	return 0; 
}
