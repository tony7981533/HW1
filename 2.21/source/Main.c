#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	printf("第一張圖:\n");
	printf(" ********* \n");
	for (i = 1; i < 8; i++)
	{ 
		printf(" *       * \n");
	}
	printf(" ********* \n");

	printf("第二張圖:\n");
	printf("    ***    \n");
	printf("  *     *  \n");
	for (i = 1; i < 6; i++)
	{
		printf(" *       * \n");
	}
	printf("  *     *  \n");
	printf("    ***    \n");
	
	printf("第三張圖:\n");
	printf("   *   \n");
	printf("  ***  \n");
	printf(" ***** \n");
	for (i = 1; i < 7; i++)
	{
		printf("   *   \n");
	}

	printf("第四張圖:\n");
	printf("     *     \n");
	printf("    * *    \n");
	printf("   *   *   \n");
	printf("  *     *  \n");
	printf(" *       * \n");
	printf("  *     *  \n");
	printf("   *   *   \n");
	printf("    * *    \n");
	printf("     *     \n");
	    
	system("pause");
	return 0;
}