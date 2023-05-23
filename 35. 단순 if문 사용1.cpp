#include <stdio.h>

int main(void) {
	int a;
	printf("정수읿력(1 ~ 200) : ");
	scanf("%d", &a);
	if(a < 100)
		printf("입력한 정수가 100보다 작음 \n");
	printf("a = %d", a);
		
	return 0;
}
