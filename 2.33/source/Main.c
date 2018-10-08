#include<stdio.h>
#include<stdlib.h>

int main()
{
	double a, b, c, d, e, total;
	printf("請輸入一整天的總里程數:");
	scanf_s("%lf", &a);
	printf("請輸入汽油一公升/加侖多少錢:");
	scanf_s("%lf", &b);
	printf("請輸入平均一公升/加侖能行駛多少公里:");
	scanf_s("%lf", &c);
	printf("請輸入一天的停車費:");
	scanf_s("%lf", &d);
	printf("請輸入一天的通行費(過路費):");
	scanf_s("%lf", &e);
	total = (a / c) * b + d + e;
	printf("您所花費的金額為%.2f\n", total);
	system("pause");
	return 0;
}