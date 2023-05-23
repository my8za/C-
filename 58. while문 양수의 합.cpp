#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int sum = 0, num = 0, i = 0;
	while(i < 5) {
		while(num <= 0) {
			printf("양의 정수 입력(%d번쨰) : ", i + 1);
			scanf("%d", &num);
		}
		sum += num;
		num = 0;
		i++;
	}
	printf("총합: %d \n", sum);
} 
