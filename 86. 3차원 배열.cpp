#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int score[3][3][3];		// 3���� �迭 ���� : 3���� �� �л� 3�� ���� 3��
	int sum[3] = {0};	// 1���� �迭 ����� �ʱ�ȭ : �л��� ���� �հ�����
	int a, b, c, d, e, f;
	for(c = 0; c <  3; c++) {		// 3���� �� 
		for(b = 0; b < 3 ; b++) {	// 3���� �л����� ��ȣ 
			printf("%d�� %d�� �л��� ����, ����, ���� ���� : ", c + 1, b + 1);
			scanf("%d %d %d", &score[c][b][0], &score[c][b][1], &score[c][b][2]);
		}
		printf("\n"); 
	} 
	for(e = 0; e < 3; e++) {	// 3���� �� 
		for(d = 0; d < 3; d++) {	// �� �л��� ��ȣ 
			for(f = 0; f < 3; f++) 	// �� ���� ���� 
				sum[f] += score[e][d][f];  	// ���� �հ����� 
		}
	}
	printf("9���� ���� ���� : %d, ��� : %d\n", sum[0], sum[0] / 9);
	printf("9���� ���� ���� : %d, ��� : %d\n", sum[1], sum[1] / 9);
	printf("9���� ���� ���� : %d, ��� : %d\n", sum[2], sum[2] / 9); 
	
		
	return 0;
}
