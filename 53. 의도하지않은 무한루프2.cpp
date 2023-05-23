#include <stdio.h>

int main(void) {
	float x = 0.0;
	float sum = 0.0;
	// x가 9.9가 되는 순간, 무한루프
	// while(x < 9.9)로 수정하는 것이 좋다 
	while(x != 9.9) {
		sum += x;
		x += 0.1;
	}
	printf("sum = %f \n", sum);
}
