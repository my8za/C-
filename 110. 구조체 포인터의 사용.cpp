#include <stdio.h>
#pragma warning(disable:4996)

struct student {
	char name[10];
	int kor;
	int math;
};

int main(void) {
	// ����ü ���� ���� �� �ʱ�ȭ 
	struct student hs[4] = {{"KIM HG", 90, 95}, {"LEE SY", 85, 90}, {"PARK GS", 70, 85}, {"CHOI HJ", 95, 75}};
	struct student *p;		// ����ü ������ ���� ����
	p = hs;		//����ü ������ ���� p�� ����ü �迭 ù��° ��� �ּ� ���� / p = hs[0]
	
	printf("%s %d %d \n", p -> name, p -> kor, p -> math);	// hs[0]�� ��� ���� 
	p += 3;	  // p�� ÷�� + 3 = 3
	printf("%s %d %d \n", p -> name, p -> kor, p -> math);	// hs[3]�� ��� ���� 
	p--;		// p�� ÷�� - 1 = 2  
	printf("%s %d %d \n", p -> name, p -> kor, p -> math);	// hs[2]�� ��� ���� 
}
