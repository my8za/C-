#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	
	//����ü ���� 
	struct person {
		char *name;
		int age;
		char sex;
	};
	// ����ü ���� X(�迭) ���� �� �ʱ�ȭ 
	struct person X[3] = {{"ȫ�浿", 30, 'M'}, {"�Ӳ���", 35, 'M'}, {"Ȳ����", 27, 'F'}};
	
	int i, sum = 0;
	for(i = 0; i < 3; i++) {
		printf("�̸� : %s, ���� : %d, ���� : %c \n", X[i].name, X[i].age, X[i].sex);		//����ü �迭�� ��� ����
		sum += X[i].age;
	}
	printf("���� �� : %d", sum);
	
	return 0;
}
