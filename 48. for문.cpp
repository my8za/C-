#include <stdio.h>

int main(void) {
	int i, sum = 0;
	for(i = 1; i <= 10; ++i) {
		sum += i;
		printf("%d��° ���� : sum = %d \n", i, sum);	
	}
	printf("1���� %d������ �� = %d \n", i - 1, sum);
	return 0; 
	
	
	// ���ѷ��� for(;;) 
} 
