#include <stdio.h>
#pragma warning(disable:4996)


// 재귀함수를 이용한 조합 
/* 조합(기호 nCr) : 
		서로 다른 n개의 물건에서 순서를 생각하지 않고, 
		r개를 택할때, 이것은 n개에서 r개를 택하는 조합이라 한다.
		nCr은 r이 0이거나 n이라면 1이며, nCr(n-1, r-1) + nCr(n - 1, r)과 같다. 
*/


int nCr(int n, int r);		// 함수 원형(프로토타입) 선언 

int main(void) {
	int n, r;
	scanf("%d %d", &n, &r);
	printf("%d", nCr(n, r));
	return 0;
}

int nCr(int n, int r) {		// 함수 정의
 	if(r == 0 || r == n)
 		return 1;
	else
		return nCr(n - 1, r - 1) + nCr(n - 1, r);
}
