#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num1, num2;
	printf("Please input two integers:");
	scanf_s("%d %d", &num1, &num2);
	if (num1 % num2 == 0)
		printf("The first is a multiple of the second.\n");
	else
		printf("The first isn't a multiple of the second.\n");
	
	system("pause");
	return 0;
}