#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	static int score[4][3] = {{90, 90, 90},{80, 80, 80},{70, 70, 70},{60, 60, 60}};		//2차원 배열의 선언과 초기화 
	int sum, i, j;
	printf("번호\t 국어\t 수학\t 영어\t 합계 \n");
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
