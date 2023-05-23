#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int *p, *q;
	int a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	p = &a[3];
	printf("*p == %d \n", *p);
	printf("*(p + 3) == %d\n", *(p + 3));
	q = p + 3;
	printf("*q == %d \n", *q);
	printf("p - q == %d \n", p - q);
	printf("q- p == %d \n", q - p);
//	printf("q + p == %d \n", q + p); 포인터간 덧셈은 불가능 

	// 포인터 연산 
	int *x;
	int arr[] = {10, 2, 33, 40, 55, 666, 77};
	x = &arr[3];
	printf("*x == %d \n", *x);
	printf("*x + 1 == %d \n", *x + 1);
	printf("*(x + 1) == %d \n", *(x + 1));
	printf("*x++ == %d\n", *x++);
	printf("*++x == %d\n", *++x);
	printf("++*x == %d\n", ++*x);
	
}
