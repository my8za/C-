#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int score[3][3][3];		// 3차원 배열 선언 : 3개의 반 학생 3명 과목 3개
	int sum[3] = {0};	// 1차원 배열 선언과 초기화 : 학생별 과목 합계점수
	int a, b, c, d, e, f;
	for(c = 0; c <  3; c++) {		// 3개의 반 
		for(b = 0; b < 3 ; b++) {	// 3명의 학생들의 번호 
			printf("%d반 %d번 학생의 국어, 수학, 영어 점수 : ", c + 1, b + 1);
			scanf("%d %d %d", &score[c][b][0], &score[c][b][1], &score[c][b][2]);
		}
		printf("\n"); 
	} 
	for(e = 0; e < 3; e++) {	// 3개의 반 
		for(d = 0; d < 3; d++) {	// 세 학생의 번호 
			for(f = 0; f < 3; f++) 	// 각 과목별 점수 
				sum[f] += score[e][d][f];  	// 과목 합계점수 
		}
	}
	printf("9명의 국어 총점 : %d, 평균 : %d\n", sum[0], sum[0] / 9);
	printf("9명의 수학 총점 : %d, 평균 : %d\n", sum[1], sum[1] / 9);
	printf("9명의 영어 총점 : %d, 평균 : %d\n", sum[2], sum[2] / 9); 
	
		
	return 0;
}
