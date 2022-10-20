#include <stdio.h>
#include <stdlib.h>

int main()
{
	float salary;
	while (1)
	{
		printf("Enter sales in dollars(-1 to end):");
		scanf("%f", &salary);
		if (salary == -1)
			break;
		printf("Salary is :$%.f\n", 0.09*salary + 200);
	}
	return 0;
}