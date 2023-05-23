#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	unsigned long int f;
	int n = 0;
	printf("계승을 구할 수를 입력하세요 : ");
	// 프로그램 작성 시 사용자는 어떤 값도 입력할 수 있음을 고려해야 함
	scanf("%d", &n);
	f = n;
	printf("%d != ", n);
/* 양수가 아닌 값이 입력될 경우, 무한 루프에 빠질 수 있음
while(--n > 0)으로 수정하고 프로그램을 적절히 수정하는 것이 좋음*/
	while(--n)
		f *= n;
	printf("%lu \n", f);	
}
