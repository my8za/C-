#include <stdio.h>

//int main(void) {
//	int score = 0;
//	printf("������ �Է��ϼ��� : \n");
//	scanf("%d", &score);
//	
//	if(score >= 90) {
//		printf("����� ������ A\n");
//	} else if(score >= 80) {
//		printf("����� ������ B\n");
//	}
//}

int main(void) {
	int score = 0;
	printf("���� �Է�\n");
	scanf("%d", &score);
	
	switch(score) {
		case 95: printf("A����\n");
		break;
		case 85: printf("B����\n");
		break;
		case 75: printf("C����\n");
		break;
		default: printf("����\n");
		break;
	}
	
	return 0;
} 
