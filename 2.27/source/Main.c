#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j,k;
	printf("    *    \n");
	printf("   ***   \n");
	printf("  *****  \n");
	printf(" ******* \n");
	printf("*********\n");
	printf("\n");
	printf("other single printf statement\n");
	printf("\n");
	for (i = 1;i <= 5;i++)
	{
		for (j = 1;j <= 5 - i;j++)
		{
			printf(" ");
		}
		for (k = 0;k < (i * 2) - 1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}