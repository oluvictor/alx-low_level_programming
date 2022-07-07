#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point: computes and prints the sum of
 * all the multiples of 3 or 5 below 1024 (excluded)
 *
 * Return: 0 (Always success)
 */
int main(void)
{
	int i;
	long sum = 0;

	for (i = 3; i < 1024; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
