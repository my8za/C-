#include <stdio.h>

//int main(void) {
//	int score = 0;
//	printf("점수를 입력하세요 : \n");
//	scanf("%d", &score);
//	
//	if(score >= 90) {
//		printf("당신의 학점은 A\n");
//	} else if(score >= 80) {
//		printf("당신의 학점은 B\n");
//	}
//}

int main(void) {
	int score = 0;
	printf("점수 입력\n");
	scanf("%d", &score);
	
	switch(score) {
		case 95: printf("A학점\n");
		break;
		case 85: printf("B학점\n");
		break;
		case 75: printf("C학점\n");
		break;
		default: printf("낙제\n");
		break;
	}
	
	return 0;
} 
