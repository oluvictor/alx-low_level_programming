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
	else
	{
		last  = n % 10;
		return ('0' + last);
	}
}
