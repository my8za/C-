#include <stdio.h>
#pragma warning(disable:4996)

// 파일 입출력 프로그램의 구조 

int main(void) {
	char ch;
	FILE *fp;		// 파일 포인터 선언  FILE은 구조체형으로 되어있dmau <stdio.h>에 정의되어있음 
	fp = fopen("sample.txt", "w");	// sample.txt 파일 open
	for(ch = 'A'; ch <= 'Z'; ch++) 
		fputc(ch, fp);	// 자료 출력
	fclose(fp);		// 파일 close 
	 
}
