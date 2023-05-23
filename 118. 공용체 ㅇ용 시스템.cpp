#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	// 공용체 정의와 변수(shared) 생성 
	union shared_tag {
		char c;
		int i;
		long l;
		float f;
		double d;
	} shared;
	
	// shared 공용체 멤버변수  초기화
	shared.c = '$';
	printf("\n char c = %c \n", shared.c);
	printf("\n int i = %d \n", shared.i);
	printf("\n long l = %ld \n", shared.l);
	printf("\n float f = %f \n", shared.f);
	printf("\n double d = %f \n", shared.d); 

	shared.d = 12345678.3464364;
	printf("\n char c = %c \n", shared.c);
	printf("\n int i = %d \n", shared.i);
	printf("\n long l = %ld \n", shared.l);
	printf("\n float f = %f \n", shared.f);
	printf("\n double d = %f \n", shared.d); 
	
	return 0;
}



/*
공용체를 이용하면 초기화된 겨로가를 제외하고는 결과값을 예측할 수 없다.
왜냐하면 동일한 기억공간에 저장된 값이 어떤 자료가 되느냐에 따라 다른결과를 보고
다른 자룟값이 들어오면 중첩되어 전에 있던 자료는 없어지기 때문 
*/
