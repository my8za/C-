#include <stdio.h>
#pragma warning(disable:4996)


// ����Լ��� �̿��� ���� 
/* ����(��ȣ nCr) : 
		���� �ٸ� n���� ���ǿ��� ������ �������� �ʰ�, 
		r���� ���Ҷ�, �̰��� n������ r���� ���ϴ� �����̶� �Ѵ�.
		nCr�� r�� 0�̰ų� n�̶�� 1�̸�, nCr(n-1, r-1) + nCr(n - 1, r)�� ����. 
*/


int nCr(int n, int r);		// �Լ� ����(������Ÿ��) ���� 

int main(void) {
	int n, r;
	scanf("%d %d", &n, &r);
	printf("%d", nCr(n, r));
	return 0;
}

int nCr(int n, int r) {		// �Լ� ����
 	if(r == 0 || r == n)
 		return 1;
	else
		return nCr(n - 1, r - 1) + nCr(n - 1, r);
}
