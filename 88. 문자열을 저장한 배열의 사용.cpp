#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	char str_in[50], str_out[50];		// 문자열 저장을 위한 배열 선언 
	int i = 0;
	printf("문자열 입력 : ");
	scanf("%s", str_in);
	do {
		str_out[i] = '*';		// str_in 배열의 문자를 '*'로  변경하여 str_out 배열에 저장
		i++; 
	} while(str_in[i] != '\0');	//배열의 i 번째가 null이 오기전까지 
	str_out[i] = '\0';		//문자열 끝을 나타내는 null 문자 저장
	printf("입력 문자열 배열 str_in = %s \n", str_in); 
	printf("출력 문자열 배열 str_out = %s \n", str_out);
	
	return 0;
} 
