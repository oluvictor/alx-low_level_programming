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
	float n1 = 0;
	float n2 = 1;
	float next;

	for (i = 0; i < 98; i++)
	{
		next = n1 + n2;
		printf("%.0f", next);
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
