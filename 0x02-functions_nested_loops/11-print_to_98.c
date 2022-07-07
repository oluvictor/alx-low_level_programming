#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: starting point
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d",  n);
			if (n != 98)
				printf(", ");
			n++;
		}
		_putchar('\n');
	}
	else if (n == 98)
	{
		_putchar(57);
		_putchar(56);
		_putchar('\n');
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n--;
		}
		_putchar('\n');
	}
}
