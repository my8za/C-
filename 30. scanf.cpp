#include <stdio.h>

int main(void) {
	int a;
	long long int b;
	float c;
	char ch;
	char s[20];
	printf("������ long long ������ �Է� : ");
	scanf("%d %lld, &a, &b");
	printf("a = %d, b = %lld \n", a, b);
	printf("�Ǽ��� �Է� : ");
	scanf("%f", &c);
	printf("c = %10.4f, c(����) = %e \n", c, c);
	printf("���ڸ� �Է� : ");
	printf(" %c", &ch);
//	���� scanf()�� �Է��� �� ���� Enter�� �����ϱ� ���� %c �տ� ������ �־�� ��
	printf("ch = %c \n", ch);
	printf("���ڿ��� �Է� : ");
	scanf("%s", s);
	printf("s[] = %s \n", s); 
	
	return 0;
}
