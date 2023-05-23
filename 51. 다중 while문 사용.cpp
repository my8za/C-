#include <stdio.h>

int main(void) {
	int i, j;
	i = 1;
	while(i <= 9) {
		printf(" - %d단 -", i);
		i++;
	}
	printf("\n");
	i = 1;
	while(i <= 9) {
		j = 2;
		while(j <= 9) {
			printf("%d x %d = %d \n", i, j, i*j);
			j++;
		}
		printf("\n");
		i++;
	} 
}


// while문의 무한루프 while(1) 
