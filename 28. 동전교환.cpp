#include <stdio.h>

int main(void) {
	int in_money, coin_500, coin_100, coin_50, coin_10;
	printf("�������� ��ȯ�� �ݾ��� ?");
	scanf("%d", &in_money);
	coin_500 = in_money / 500;
	in_money = in_money % 500;
	coin_100 = in_money / 100;
	in_money = in_money % 100;
	coin_50 = in_money / 50;
	in_money = in_money % 50;
	coin_10 = in_money / 10;
	in_money = in_money % 10;
	printf("\n 500��¥�� -> %d��\n", coin_500);
	printf("\n 100��¥�� -> %d��\n", coin_100);
	printf("\n 50��¥�� -> %d��\n", coin_50);
	printf("\n 10��¥�� -> %d��\n", coin_10);
	printf("�ٲ��� ���� �ܵ� -> %d��\n", in_money); 
} 
