#include <stdio.h>
#pragma warning(disable:4996)

int sum(int, int);		//�Լ� ����(������Ÿ��) ����

void test();	 	//�Լ� ���� ���� 

int main(void) {
	int s;
	test();		// �Լ� �ܼ� ȣ�� 
	sum(10, 20);	//�Լ� �ܼ�  ȣ�� (����X) 
	s = sum(30, 40);   // �Լ�ȣ���Ͽ� ��ȯ�� ���� s�� ����
	printf("sum from 30 to 40 = %d \n", s);
	printf("sum from 100 to 200 =%d \n", sum(100, 200));	// �Լ� ȣ�� ����� ������� 
	 
	return 0;
} 

void test() {
	printf("�Լ��� �������� ��� ���\n");
} 

int sum(int a, int b) {
	int i, s = 0;
	for(i = a; i <= b; i++)
		s += i;
	return s;
}
