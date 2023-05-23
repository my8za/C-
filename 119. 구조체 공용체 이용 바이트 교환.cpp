# include <stdio.h>
#pragma warning(disable:4996)

// 구조체 정의
struct BYTE {
	unsigned char l, h;
}; 

// 공용체 정의
union body {
	// 공용체 멤버로 구조체 포함 
	struct BYTE byte;
	unsigned short word; 
}; 

// union body형 공용체 swap 함수 정의 (매개변수로 공용체) 
union body swap(union body x) {
	union body y;	// 공용체 변수 선언
	y.byte.l =  x.byte.h;
	y.byte.h = x.byte.l;
	return (y); 
}

int main(void) {
	// union body 공용체 변수 선언 
	union body a, b;
	printf("data ? ");
	scanf("%x", &a.word);
	b = swap(a);
	printf("%x -> %x \n", a.word, b.word);
} 
