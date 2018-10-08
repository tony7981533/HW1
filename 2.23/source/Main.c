#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	int num[2];
	int max, min;
	printf("number1 = ");
	scanf_s("%d", &num[0]);
	printf("number2 = ");
	scanf_s("%d", &num[1]);
	printf("number3 = ");
	scanf_s("%d", &num[2]);
	max = num[0];
	min = num[0];
	for (i = 0; i < 3; i++)
	{
		if (max < num[i]) max = num[i];
		if (min > num[i]) min = num[i];
	}
	printf("The largest integers is %d\n", max);
	printf("The smallest integers is %d\n", min);
	system("pause");
	return 0;
}