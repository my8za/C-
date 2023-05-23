#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int i, n, c = 'A';
	while(1) {	
		printf("È½¼ö´Â?");
		scanf("%d", &n);
		for(i = 1; i <= n; i++) {
			printf("%c", c);
			if(c == 'Q')
				goto end;
			c++;
		} 
		printf("\n\n");
	}
	end:
	printf("\n\n³¡");
} 
