#include <unistd.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: the number to be printed
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int last;

	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n > 0)
	{
		last  = n % 10;
		_putchar(48 + last);
		return (last);
	}
	else
	{
		last = (n % 10) / -1;
		_putchar(48 + last);
		return (last);
	}

}
