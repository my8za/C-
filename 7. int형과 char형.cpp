#include <stdio.h>

int main(void) {
	// char형은 내부적으로 숫자로 구성(ASCII CODE) 
	
	int x = 65;
	printf("%c\n", x);
	
	char y = 65;
	printf("%c\n", y);	
	
	char z = 'B';
	printf("%c\n", z);
	printf("%d\n", z);
	
	return 0;
}
