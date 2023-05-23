#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int num, sum = 0;
	while(1) {
		printf("num(³¡ : 0)...? ");
		scanf("%d", &num);
		if(num == 0)
			break;
		sum += num;
	} 
	printf("sum = %d", sum);
} 
