#include <stdio.h>
#include <math.h>
#pragma warning(diable:4996)

int main(void) {
	double x = 12.34;
	int i = -5, j = 2;
	int a, b, c;
	
//	math.h 수학함수
	a = ceil(x);		// x 이상의 최소 정수 값 (반내림) 
	b = floor(x);		// x 미만의 최대 정수 값 (반올림)
	c = pow(4, j); 		// xy값
	printf("abs(-5) = %d\n", abs(i));	//abs 절대값
	printf("ceil(12.34) = %d\n", a);
	printf("floor(12.34) = %d\n", b);
	printf("pow(4, 2) = %d\n", c);
	printf("cos(10) = %f \n", cos(10));		//cosine값 
	printf("exp(2) = %.f \n", exp(j));		// 지수값
	printf("sqrt(2) = %5f\n", sqrt(j));		//제곱근값 
	 
	return 0;
} 
