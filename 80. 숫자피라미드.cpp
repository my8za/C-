#include <stdio.h>
#pragma warning(disable:4996)

// �ݺ��Լ��� �̿��ؼ� ���� �Ƕ�̵� ��� 
// �ݺ��Լ��� ���� ���� ����  for���� while������ ����

int print(int a);	//�Լ� ����(���η�Ÿ��) ���� 
 
int main(void) {
	int a;
	scanf("%d", &a);
	print(a);		// �Լ� ȣ�� 
	return 0;

}

int print(int a) {
	int i, j;
	for(i = 0; i < a; i++) {
		for(j = 0; j <= i ; j++) {
			printf("%d", j + 1);
		}
		printf("\n");
	}
} 
