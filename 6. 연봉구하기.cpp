#include <stdio.h>
#define MONTHS 12	//��������� ���� 

int main(void) {
	// �Ǽ��� ���� ���� 
	double monthSalary = 1000.5;
	printf("$ %.2f", monthSalary * MONTHS);
	return 0;
}
