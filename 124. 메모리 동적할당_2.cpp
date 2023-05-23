#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main(void) {
	int size;	// 입력받을 문자 수 저장 변수
	char *str;	//동적 할당된 기억공간을 연결할 포인터
	printf("문자열의 크기 입력 :");
	scanf("%d", &size);		
	str = (char*)malloc(size + 1);	//입력받을 문자 수(size +1)에 맞게 동적 할당
	if(str == NULL) {
		puts("기억 공간 할당 실패");
		exit(1);
	} 
	printf("문자열을 입력 : ");
	scanf("%s", str);	// 동적으로 할당된 기억공간에 문자열 저장 
	printf("동적할당된 메모리에 저장된 문자열 : %s\n", str);
	free(str);		//기억공간 해제 
	return 0;
}
