#include <stdio.h>

int main(void) {
	float x = 0.0;
	float sum = 0.0;
	// x�� 9.9�� �Ǵ� ����, ���ѷ���
	// while(x < 9.9)�� �����ϴ� ���� ���� 
	while(x != 9.9) {
		sum += x;
		x += 0.1;
	}
	printf("sum = %f \n", sum);
}
