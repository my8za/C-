#include <stdio.h>
#pragma warning(disable:4996)

int score_sum(int gr[], int);	// �Լ� ����(������Ÿ�� ����) 

int main(void) {
	int score[5] = {10, 20, 30, 40, 50};	//1���� �迭 ����� �ʱ�ȭ
	int sum;	// ��������
	sum = score_sum(score, 5);		// �Լ�ȣ��
	printf("sum = %d\n", sum);
	printf("score[0] = %d \n", score[0]); 	// ������ ���� ���� 
	return 0;
}

int score_sum (int gr[], int size) {		// �Լ� ���� 
	int sum = 0;		// ��������
	int i;
	for(i = 0; i < size; i++)
		sum += gr[i];
	gr[0] = 0;
	return sum;
} 
