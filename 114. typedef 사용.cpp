#include <stdio.h>
#pragma warning(disable:4996)

/* typedef : 기존 자료형으 ㅣ이름을 바꾸거나 구조체형을 선언하는 데 많이 사용됨

typedef unsigned int BYTE;
BYTE val;		// == unsinged int val; 
*/


struct data{
	int x;
	int y;
};
typedef struct data DATA;	// data형 구조체를 새로운 자료형  DATA로 정의 

int main(void) {
	DATA d = {1, 2};	// struct data d = {1, 2}
	printf("d.x = %d, d.y = %d \n", d.x, d.y);
	
	return 0; 
} 
