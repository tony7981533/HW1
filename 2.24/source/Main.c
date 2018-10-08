#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	int num1;
	printf("Input an integer:");
	scanf_s("%d",&num1);
	if (num1 % 2 == 0)
		printf("The integer is even.\n");
	else
		printf("The integer is odd.\n");
	system("pause");
	return 0;
}