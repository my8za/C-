#include <stdio.h>
#pragma warning(disable:4996)

// �Լ��� �Ű������� ����ü�� ����� ���, �Ϲ������� ����ü �����͸� ����Ѵ�.  -> ���� �ӵ� ���, ������ ��� ȿ�� �� 

struct num calc(struct num *num2);		// ����ü �Լ� ����(������Ÿ��) ����

// num ����ü ����
struct num {
	int x;
	int y;
	int sum;
	int mul; 
};

int main(void) {
	struct num num1;		// ����ü ���� ����
	num1.x = 10;
	num1.y = 20;
	calc(&num1);		// ����ü �Լ� calc ȣ��(���� : ����ü num�� �޸��ּ�)
	printf("x : %d, y : %d, sum : %d, mul : %d \n", num1.x, num1.y, num1.sum, num1.mul);
	
	return 0;
}

struct num calc(struct num *num2) {		// ����ü �Լ� calc ���� 
	num2 -> sum = num2 -> x + num2 -> y;
	num2 -> mul = num2 -> x * num2 -> y; 
}

/* ������ ������(->) ���
 (*num2).x = num2 -> x 
 ��� ������(.) ��� ������ ��쿡�� ��ȣ�� �ʿ�
 .�� *���� ������ �켱������ ���⶧�� */
