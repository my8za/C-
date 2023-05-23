#include <stdio.h>
#pragma warning(disable:4996)

// 구조체 정의 
struct entry {
	char fname[20];
	char lname[20];
	char phone[10];
};

// 구조체 변수 list(배열) tjsdjs 
struct entry list[4];
int i;	// 전역변수 

int main(void) {
	for(i = 0; i < 4; i++) {
		printf("Enter first name : ");
		scanf("%s", list[i].fname);
		printf("Enter last name : ");
		scanf("%s", list[i].lname);
		printf("Enter phone number : ");
		scanf("%s", list[i].phone);
		printf("\n"); 
	}
	printf("\n");
	for(i = 0; i < 4; i++) {
		printf("Name : %s %s", list[i].fname, list[i].lname);
		printf("\t\t Phone : %s \n", list[i].phone);
	}
} 
