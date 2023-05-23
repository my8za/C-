#include <stdio.h>

int main(void) {

//	int i =1, sum = 0;
//	while (i <= 1000) {
//		sum += i;
//		i++;
//	}
	
	int i, sum = 0;
	for(i = 1; i <= 1000; i++) {
		sum += i;
	}

	printf("sum = %d \n", sum);
	return 0;
}
