#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	char name [] = "HONG GIL DONG";
	char adrs1[6] = {'S','E','O','U', 'L', '\0'};
	char adrs2[6] = {'S','E','O','U', 'L'};		// seoul다음 쓰레기값이 붙을 가능성이 있음 
	printf("name : %s \n", name);
	printf("adrs1 : %s \n", adrs1);
	printf("adrs2 : %s \n", adrs2);
	
	return 0;
} 
