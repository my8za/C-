#include <stdio.h>
int a, b, c;
int product(int x, int y);

int main(void)
{
	// ù��° �� 
	printf("Enter a number between 1 and 100 : ");
	scanf("%d", &a);
	
	// �ι�° ��
	printf("Enter another number between 1 and 100 : ");
	scanf("%d", &b); 
	
	// �Լ� ȣ�� - �� ���� ���ϰ� ��� ���
	c = product(a, b);
	printf("%d * %d = %d \n", a, b, c); 
}

// �μ��� �� 
int product(int x, int y) {
	return(x * y);
} 
