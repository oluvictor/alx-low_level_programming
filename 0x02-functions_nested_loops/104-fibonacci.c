#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point: first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: 0 (Always success)
 */
int main(void)
{
	int i;
	long double n1 = 0;
	long double n2 = 1;
	long double next;

	for (i = 0; i < 98; i++)
	{
		next = n1 + n2;
		printf("%.0Lf", next);
		n1  = n2;
		n2 = next;
		if (i < 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
