#include <stdio.h>
#pragma warning(disable:4996)

/*  �Լ� ���� ������ �ʿ���� ��� 

int sum1(int a, int b) {		// ����������Լ��� main�Լ� ������ ���ǵ� 
	return (a + b); 
}

int main(void) {
	printf("sum = %d\n", sum1(10, 20));
}
*/




// �Լ� ���� ������ �ʿ��� ���
int sum2(int x, int y);		// ���� ����

int main(void) {
	printf("sum = %d\n", sum2(20, 30));
} 
 
int sum2(int x, int y) {		// ����� �����Լ��� main�Լ� ���Ŀ� ���ǵ� 
	return (x + y);
}
