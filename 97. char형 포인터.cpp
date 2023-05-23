#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	char *cp = "COMPUTER";
	int i = 0;
	do
		printf("*(cp + %d) : %c \n", i, *(cp + i));
	while(*(cp + i++) != '\0');
	
	return 0;
}
