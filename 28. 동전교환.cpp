#include <stdio.h>

int main(void) {
	int in_money, coin_500, coin_100, coin_50, coin_10;
	printf("동전으로 교환할 금액은 ?");
	scanf("%d", &in_money);
	coin_500 = in_money / 500;
	in_money = in_money % 500;
	coin_100 = in_money / 100;
	in_money = in_money % 100;
	coin_50 = in_money / 50;
	in_money = in_money % 50;
	coin_10 = in_money / 10;
	in_money = in_money % 10;
	printf("\n 500원짜리 -> %d개\n", coin_500);
	printf("\n 100원짜리 -> %d개\n", coin_100);
	printf("\n 50원짜리 -> %d개\n", coin_50);
	printf("\n 10원짜리 -> %d개\n", coin_10);
	printf("바꾸지 못한 잔돈 -> %d원\n", in_money); 
} 
