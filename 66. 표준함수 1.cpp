#include <stdio.h>
#include <math.h>
#pragma warning(diable:4996)

int main(void) {
	double x = 12.34;
	int i = -5, j = 2;
	int a, b, c;
	
//	math.h �����Լ�
	a = ceil(x);		// x �̻��� �ּ� ���� �� (�ݳ���) 
	b = floor(x);		// x �̸��� �ִ� ���� �� (�ݿø�)
	c = pow(4, j); 		// xy��
	printf("abs(-5) = %d\n", abs(i));	//abs ���밪
	printf("ceil(12.34) = %d\n", a);
	printf("floor(12.34) = %d\n", b);
	printf("pow(4, 2) = %d\n", c);
	printf("cos(10) = %f \n", cos(10));		//cosine�� 
	printf("exp(2) = %.f \n", exp(j));		// ������
	printf("sqrt(2) = %5f\n", sqrt(j));		//�����ٰ� 
	 
	return 0;
} 
