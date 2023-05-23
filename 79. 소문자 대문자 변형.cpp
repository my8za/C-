#include <stdio.h>
#pragma warning(disable:4996)

char upper(char ch);	// 함수 원형(프로토타입) 선언 
char lower(char ch); 	// 함수 원형9프로토타입) 선언

int main(void) {
	char in_s[50], out_2[50];
	char ch;
	int i = 0;
	printf("문자열 입력 (50자 이내) : ");
	scanf("%s", in_s);
	ch = in_s[i];
	while(ch != '/0') {
		if(ch >= 'A' && ch <= 'z')
			out_s[i] = lower(ch);
		else if(ch >= 'a' && ch <= 'z')
			out_s[i] = upper(ch);
		else
			out_s[i] = ch;
	}
	out_s[i] = '/0';
	printf("변환된 결과 --? %s \n", out_s);
} 

char upper(char ch) {
	return ch - 32;
}

char lower(char ch) {
	return ch + 32;
}
