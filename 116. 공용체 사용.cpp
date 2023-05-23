#include <stdio.h>
#pragma warning(disable:4996)

union money {		// money 공용체 정의 
	int kor;
	float us;
};

int main(void) {
	float er;
	union money m;		// 공용체 변수 선언
	printf("교환하고싶은 원화 금액 입력 : ");
	scanf("%d", &m.kor);
	printf("환율 입력 :");
	scanf("%f", &er);
	printf("입력한 원화는 %d이고, ", m.kor);
	m.us = m.kor / er;
	printf("교환한 달러는 %8.3f달러입니다. \n", m.us);
//	pritnf("%d", m.kor);	공용체는 1개의 값만 저장되기 때문에 컴파일 에러 
}
