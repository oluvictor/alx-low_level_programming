#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point: first 50 Fibonacci numbers,
 * starting with 1 and 2, find sum of all the even valued numbers
 * followed by a new line.
 *
 * Return: 0 (Always success)
 */
int main(void)
{
	int i;
	long n1 = 0;
	long n2 = 1;
	long next = 0;
	long long sum = 0;

	for (i = 0; next < 4000000; i++)
	{
		next = n1 + n2;
		if ((next % 2) == 0)
		{
			sum += next;
		}
		n1  = n2;
		n2 = next;
	}
	printf("%lld", sum);
	printf("\n");
	return (0);
}
