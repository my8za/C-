#include <stdio.h>

int main(void) {
	int year, month, day;
	printf("말일 검색하고 싶은 연도와 월을 입력 : ");
	scanf("%d %d", &year, &month);
	
	if(month >= 1 && month <= 12) {
		if(month == 2) {
			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
				day = 29;
				printf("%d년 %d월은 %d일까지고 윤년입니다 \n", year, month, day);
			}
			else {
				day = 28;
				printf("%d년 %d월은 %d일까지입니다 \n", year, month, day);
				
			}
		} 
		else {
			if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
				day = 31;
				printf("%d년 %d월은 %d일까지입니다 \n", year, month, day);
			}
			else {
				day = 30;
				printf("%d년 %d월은 %d일까지입니다 \n", year, month, day);
			}
		}
	}
	else
		printf("잘못된 월을 입력\n");
} 
