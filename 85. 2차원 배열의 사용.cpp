#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	static int score[4][3] = {{90, 90, 90},{80, 80, 80},{70, 70, 70},{60, 60, 60}};		//2���� �迭�� ����� �ʱ�ȭ 
	int sum, i, j;
	printf("��ȣ\t ����\t ����\t ����\t �հ� \n");
	for(i = 0; i < 4; ++i) {
		sum = 0;
		printf("%3d", i + 1);
		for(j = 0; j < 3; j++) {
			printf("\t%3d", score[i][j]);
			sum += score[i][j];
		}
		printf("\t%3d \n", sum);
	} 
	return 0;
} 
