#include <stdio.h>

int main(void) {
	int a = 4, b = 7, c, d, e;
	c = a> 2 && b <= 7;		// 모두 참이므로 참 ture 1
	printf("c = %d\n", c); 
	d = a < 2 || b <= 7;	// 하나라도 참이면 참 true 1
	printf("d = %d\n", d);
	e = !a;		// a(true) 논리부정 false 0
	printf("e = %d\n", e); 
} 
