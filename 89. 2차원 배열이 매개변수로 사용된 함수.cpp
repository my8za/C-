#include <stdio.h>
#pragma warning(disable:4996)

void score_sum(int gr[][5], int, int);		// 다차원 배열에서는 가장 높은 차원의크기는 생략가능 

int main(void) {
	int score[2][5] = {{10, 20, 30, 40, 50}, {10, 10, 10, 10, 10}};
	score_sum(score, 2, 5); 
	return 0;
}

void score_sum(int gr[][5], int row, int col) {
	int sum[2] = {0};
	int i, j;
	for(i = 0; i < row; i++) {
		for(j = 0; j < col; j++)
			sum[i] += gr[i][j];
		printf("sum[%d] = %d \n", i, sum[i]);
	}
}
