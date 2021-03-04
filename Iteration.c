#include "Header.h"

int iterateFactorial(int n)
{
	int i;
	int fact = 1;
	
	for (i = 1; i <= n; i++)
	{
		fact = fact * i;
		
		printf(" %d ", fact);
	}
	
	return fact;
}

int iterateFibonacci(int n)
{
	int i;
	int fibo = 1, t2 = 1, nt;
	
	
	for (int i = 1; i <= n; i++)
	{
		printf(" %d ", fibo);
		
		nt = fibo + t2;
		fibo = t2;
		t2 = nt;
	}
	
	return fibo;
}

int iterateSum(int n)
{
	int i, sum;
	
	for (int i = 1; i <= n; i++)
	{	
		sum += i;
		
		printf(" %d ", sum);
	}
	
	return sum;
}
