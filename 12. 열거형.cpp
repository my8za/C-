#include <stdio.h>

int main(void) {
	enum day1 {sun, mon, tue, wed, thu, fri, sat} d1;
	enum day2 {sun = 2, mon, tue, wed, thu, fri, sat} d2;
	d1 = wed;
	d2 = wed;
	printf("������ d1 ����� ���� %d�Դϴ�.\n", d1);
	printf("������ d2 ����� ���� %d �Դϴ�. \n", d2);	
}
