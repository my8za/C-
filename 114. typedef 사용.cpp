#include <stdio.h>
#pragma warning(disable:4996)

/* typedef : ���� �ڷ����� ���̸��� �ٲٰų� ����ü���� �����ϴ� �� ���� ����

typedef unsigned int BYTE;
BYTE val;		// == unsinged int val; 
*/


struct data{
	int x;
	int y;
};
typedef struct data DATA;	// data�� ����ü�� ���ο� �ڷ���  DATA�� ���� 

int main(void) {
	DATA d = {1, 2};	// struct data d = {1, 2}
	printf("d.x = %d, d.y = %d \n", d.x, d.y);
	
	return 0; 
} 
