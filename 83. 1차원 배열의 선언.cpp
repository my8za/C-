#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	// 1차원 배열 선언과 초기화
	int arr1[4] = {10, 20, 30, 40};			
	int arr2[] = {10, 20, 30, 40};
	int arr3[4] = {10, 20};
	int arr4[4] = {0};
	int i;
	for(i = 0; i <= 3; i++) 
		printf("arr1[%d] = %d\t", i, arr1[i]);
	printf("\n");
	for(i = 0; i <= 3; i++) 
		printf("arr2[%d] = %d \t", i, arr2[i]);
	printf("\n");
	for(i = 0; i <= 3; i++) 
		printf("arr3[%d] = %d \t", i, arr3[i]);
	printf("\n");
	for(i = 0; i <= 3; i++) 
		printf("arr4[%d] = %d \t", i, arr4[i]);
	printf("\n");
	return 0;
} 
