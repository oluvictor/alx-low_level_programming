#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point: first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: 0 (Always success)
 */
int main(void)
{
	int i;
	long n1 = 1;
	long n2 = 2;
	long next;

	for (i = 0; i < 50; i++)
	{
		next = n1 + n2;
		printf("%ld, ", next);
		n1  = n2;
		n2 = next;
	}
	printf("\n");
	return (0);
}
