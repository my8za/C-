#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int days = 365;
	int month = 12;
	int Table[5] = {1, 2, 3, 4, 5};
	printf("days�� �ּҴ� %x \n", &days);
	printf("month�� �ּҴ� %x \n", &month);
	printf("�迭�� Table�� �ּҴ� %x \n", &Table);
	printf("�迭�� Table�� ù��° ����� �ּҴ� %x \n", &Table[0]);
	printf("�迭�� Table�� �ι��� ����� �ּҴ� %x \n", &Table[1]);
	
	
	return 0;
}
