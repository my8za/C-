#include <stdio.h>
#define MONTHS 12	//상수에대한 정의 

int main(void) {
	// 실수형 월급 변수 
	double monthSalary = 1000.5;
	printf("$ %.2f", monthSalary * MONTHS);
	return 0;
}
