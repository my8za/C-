#include <stdio.h>
#define SECOND_PER_MIN 60;

int main(void) {
	int input = 1000;
	int min = input / SECOND_PER_MIN;
	int sec = input % SECOND_PER_MIN;
	printf("%d초는%d분 %d초입니다.\n", input, min, sec);
	
	return 0;
}
