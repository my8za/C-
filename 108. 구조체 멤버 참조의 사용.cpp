#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

// �̸��� person ����ü ����
struct person {
	char name[8];
	int age;
	char sex;
};

int main(void) {
	struct person X = {"ȫ�浿", 30, 'M'};			// ����ü ���� X ����� �ʱ�ȭ 
	struct person Y; 		// ����ü ���� Y ����
	strcpy(Y.name, "�Ӳ���");		// Y�� ����ü ��� name ����, strcpy() : ���ڿ� ���� �Լ� 
	Y.age = 35;
	Y.sex = 'M';
	
	printf("X�� ���� : %s, %d, %c\n", X.name, X.age, X.sex);
	printf("Y�� ���� : %s, %d, %c\n", Y.name, Y.age, Y.sex); 
	printf("sizeof(person.name) : %dbyte \n", sizeof(X.name));		//����ü ������� name�� �޸�ũ�� 
	printf("sizeof(person.age) : %dbyte \n", sizeof(X.age));		//����ü ������� name�� �޸�ũ�� 
	printf("sizeof(person.sex) : %dbyte \n", sizeof(X.sex));		//����ü ������� name�� �޸�ũ�� 
	printf("sizeof(person) : %dbyte \n", sizeof(X));		// ����ü ��ü�� ũ�� : �޸� �Ҵ� �ɶ��� ��� �߿��� ���� ū �ڷ����� ũ��� �Ҵ�ȴ� 
	
	return 0;
} 
