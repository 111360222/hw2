#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j,k=0;
	printf("\n(A)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j<= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n(B)\n");
	for (i = 10 ; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n(C)\n");
	for (i = 1; i <=10; i++)
	{
		for (j = 2; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j <= (10 - i); j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n(D)\n");
	
	for (i = 10; i >= 1; i--)
	{
		for (j = 1; j <= i-1; j++)
		{
			printf(" ");
		}
		for (j = 0 ; j <= (10-i); j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}