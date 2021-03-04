#include "Header.h"

int main()
{
	int n, i;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	if (n == 0)
	{
		printf("\nNumber cannot be 0\n\n");
		
		system("pause");
		system("cls");
		
		return main();
	}
	else
	{
		printf("\nFactorial series using non-recursive function: \n\n\t");
		iterateFactorial(n);
	
		printf("\n\nFactorial series using recursive function: \n\n\t");
		for (i = 1; i <= n; i++)
		{
			printf(" %d ", recursiveFactorial(i));
		}
		
		printf("\n\nFibonacci series using non-recursive function: \n\n\t");
		iterateFibonacci(n);
		
		printf("\n\nFibonacci series using recursive function: \n\n\t");
		for (i = 0; i < n; i++)
		{
			printf(" %d ", recursiveFibonacci(i - 1));
		}
		
		printf("\n\nSum series using non-recursive function: \n\n\t");
		iterateSum(n);
		
		printf("\n\nSum series using recursive function: \n\n\t");
		for (i = 1; i <= n; i++)
		{
			printf(" %d ", recursiveSum(i) - 1);
		}
		
		printf("\n");
	
		return 0;
	}
	
}
