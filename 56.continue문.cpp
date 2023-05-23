#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

int main(void) {
	int num = 1;
	while(num != 0) {
		printf("num = ?(0 : Á¾·á) : ");
		scanf("%d", &num);
		if(num < 0) {
			printf("num : Negative number ! \n\n");
			continue;
		} 
		printf("Squareroot of %d = %f \n\n", num, sqrt(num));
	}
	printf("The end \n");
}
