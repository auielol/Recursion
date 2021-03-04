#include "Header.h"

int recursiveFactorial(int n)
{
	if (n > 0)
	{
		return n * recursiveFactorial(n - 1);
	}
	else
	{
		return 1;
	}
}

int recursiveFibonacci(int n)
{
	if (n > 0)
	{
		return (recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2));
	}
	else
	{
		return 1;
	}
}

int recursiveSum(int n)
{
	if (n > 0)
	{
		return n + recursiveSum(n - 1);
	}
	else
	{
		return 1;
	}
}
