#include <stdio.h>
#pragma warning(disable:4996)

union money {		// money ����ü ���� 
	int kor;
	float us;
};

int main(void) {
	float er;
	union money m;		// ����ü ���� ����
	printf("��ȯ�ϰ���� ��ȭ �ݾ� �Է� : ");
	scanf("%d", &m.kor);
	printf("ȯ�� �Է� :");
	scanf("%f", &er);
	printf("�Է��� ��ȭ�� %d�̰�, ", m.kor);
	m.us = m.kor / er;
	printf("��ȯ�� �޷��� %8.3f�޷��Դϴ�. \n", m.us);
//	pritnf("%d", m.kor);	����ü�� 1���� ���� ����Ǳ� ������ ������ ���� 
}
