# include <stdio.h>
#pragma warning(disable:4996)

// ����ü ����
struct BYTE {
	unsigned char l, h;
}; 

// ����ü ����
union body {
	// ����ü ����� ����ü ���� 
	struct BYTE byte;
	unsigned short word; 
}; 

// union body�� ����ü swap �Լ� ���� (�Ű������� ����ü) 
union body swap(union body x) {
	union body y;	// ����ü ���� ����
	y.byte.l =  x.byte.h;
	y.byte.h = x.byte.l;
	return (y); 
}

int main(void) {
	// union body ����ü ���� ���� 
	union body a, b;
	printf("data ? ");
	scanf("%x", &a.word);
	b = swap(a);
	printf("%x -> %x \n", a.word, b.word);
} 
