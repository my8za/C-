#include <stdio.h>
#pragma warning(disable:4996)

void score_avg(int gr[][2][3], int, int, int);		// 함수 원형(프로토타입) 선언 

int main(void) {
	int score [4][2][3] = {{{10, 20, 30}, {10, 10, 10}}, {{0, 40, 50}, {10, 10, 10}}, {{30, 30, 30}, {50, 50, 50}}, {{20, 20, 20}, {0, 0, 0}}};
	score_avg(score, 4, 2, 3);
	return 0;
}

void score_avg(int gr[][2][3], int size, int row, int col) {
	int student_sum = 0, subject_sum = 0;
	int subject_avg = 0;
	int i, j, k;
	for(k = 0; k < size; k++) {
		student_sum = 0;
		for(i = 0; i < row; i++) {
			subject_sum = 0;
			for(j = 0; j < col; j++) 
				subject_sum += gr[k][i][j];
			subject_avg = subject_sum / col;
			printf("student%d avg = %d\n", i + 1, subject_avg);
			student_sum += subject_avg;
		} 
		printf("class%d avg = %d \n\n", k + 1, student_sum / row);
	}
}
