#include <stdio.h>
#define IN "���� �������� 100�Դϴ�.\n"
#define PI 3.14159226535
#define AREA(x) (PI * (x) * (x))
#define OUT printf("���� ������ ���ϰ� ���α׷��� �����մϴ�. \n")
 
int main(void) {
	printf("%s \n", IN);	
	printf("���� ������ %10.5f�Դϴ�. \n\n", AREA(100));
	OUT;
}
