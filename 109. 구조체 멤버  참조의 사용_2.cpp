#include <stdio.h>
#pragma warning(disable:4996)

//  struct person�� man�̶�� ���ο� �ڷ������� ���� 
typedef struct person {
	char name[8];
	int age;
	char sex;
} man; 


// �̸��� department�� ����ü ����
struct department {
	char deptname[20];
	// ����ü ����� man �ڷ���(person����ü) ������ ���� 
	man person1;
	man person2;
	man person3;
	int member;
}; 

int main(void) {
	//����ü�� ���� ����� ���ÿ� �ʱ�ȭ 
	struct department accounting = {"Accounting", 
	{"ȫ�浿", 30, 'M'}, 
	{"�Ӳ���", 35, 'M'}, 
	{"Ȳ����", 27, 'F'}, 
	3};
	
	printf("person1�� ���� : %s, %d, %c \n", accounting.person1.name, accounting.person1.age, accounting.person1.sex);
	printf("person2�� ���� : %s, %d, %c \n", accounting.person2.name, accounting.person2.age, accounting.person2.sex);
	printf("person3�� ���� : %s, %d, %c \n", accounting.person3.name, accounting.person3.age, accounting.person3.sex);
	
	
	return 0;
} 
