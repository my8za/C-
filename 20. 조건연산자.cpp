#include <stdio.h>

int main(void) {
	int a = 10, b;
	b = (a > 15) ? (a + 1) : (a - 1);
	printf("b = %d", b);
}
