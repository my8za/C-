#include <stdio.h>
#pragma warning(disable:4996)

//��ȯ �ڷ����� struct num 
// struct num���� ����ü�� �Ű������� ���� calc �Լ� 
struct num calc(struct num num2);	// ����ü �Լ� ����(������Ÿ��) ����, 

struct num{
	int x;
	int y;
	int sum;
	int mul;
}; 

int main(void) {
	struct num num1;	// ����ü ���� ���� 
	num1.x = 10;
	num1.y = 20;
	num1 = calc(num1);		// calc�Լ��� �Ű������� num1 ����ü�� �Ѱ���
	
	printf("x : %d, y : %d, sum : %d, mul : %d \n", num1.x, num1.y, num1.sum, num1.mul); 
}

struct num calc(struct num num2) {
	// �Ű����� num2�� �Ѱܹ޾� ����ü�� ������� ��� 
	num2.sum = num2.x + num2.y;
	num2.mul = num2.x * num2.y;
	return(num2);	//����ü ���� 
}
