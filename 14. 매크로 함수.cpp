#include <stdio.h>
#define HAP1 (x, y) x + y
#define HAP2 (x, y) ((x) + (y))
#define GOP1 (x, y) x * y
#define GOP2 (x, y) ((x) * (y))


int main(void) {
	int h1, h2, g1, g2;
	h1 = 10 * HAP1 (3, 4);	// 10 * 3 + 4
	h2 = 10 * HAP2 (3, 4);	// 10 * (3 + 4)
	g1 = GOP1(1 + 2, 3 + 4);	// 1 + 2 * 3 + 4
	g2 = GOP2(1 + 2, 3 + 4);	// (1 + 2) * (3 + 4)
	
	printf("h1 = %d, h2 = %d \n", h1, h2);
	printf("g1 = %d, g2 = %d \n", g1, g2);
		
	return 0;
}
