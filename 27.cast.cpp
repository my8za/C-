#include <stdio.h>

int main(void) {
	
	// 자동 형변환
	int a = 3, b = 4;
	double c;
	c = a / b;
	printf("나눗셈의 결 : %f \n", c); 
	
	// 강제 형변환
	int x = 3, y = 4;
	double z;
	z = (double) x / y;
	printf("나눗셈 결과 : % f\n", z); 
}
