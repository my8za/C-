#include <stdio.h>

int main(void) {
	enum day1 {sun, mon, tue, wed, thu, fri, sat} d1;
	enum day2 {sun = 2, mon, tue, wed, thu, fri, sat} d2;
	d1 = wed;
	d2 = wed;
	printf("열거형 d1 저장된 값은 %d입니다.\n", d1);
	printf("열거형 d2 저장된 값은 %d 입니다. \n", d2);	
}
