#include <stdio.h>

int main(void) {
	int a;
	printf("정수를 입력하세요 : ");
	scanf("%d", &a);
	if(a >= 0)
		if(a == 0)
			printf("입력된 값은 0");
		else
			printf("입력된 값은 양수");
	else
		printf("입력된 값음 음수"); 
} 
