#include <stdio.h>
#pragma warning(disable:4996)

void static_test();		//�Լ� ����(������Ÿ��) ����

int main(void) {
	int i = 0;
	while(i < 5) {
		static_test();	// �Լ�ȣ��
		i++; 
	}
} 

void static_test () {
	static int s;		// ���������� �ڵ����� 0 �ʱ�ȭ
	auto int a = 0;		// �ڵ����� ����
	++s;
	++a;
	printf("static s = %d, auto a = %d \n", s, a);  
}
