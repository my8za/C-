#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

struct person {
	char name[20];
	char sex;
	int age;
}; 

typedef struct person MAN;		// person�� ����ü�� MAN������ ����
typedef unsigned char CHAR;		// unsigned char�� ���ο� CHAR�� ����
typedef int* PTR;		// int*�� PTR�� ����


// main �Լ�
int main(void) {
	MAN member;		// struct man member ���� 
	CHAR data;		// unsigned char ���� 
	PTR pt;			// int *pt ���� 
	strcpy(member.name, "ȫ�浿");		// person�� ����ü MAN�� ��� �ʱ�ȭ
	member.sex = 'M';
	member.age = 30;
	data = 100;		// unsigned char data�� 100 ����
	pt = &(member.age);		// person����ü�� age�� �޸��ּҸ� int *pt�� ����
	printf("*pt = %d\n", *pt); 
	 
	return 0;
} 
