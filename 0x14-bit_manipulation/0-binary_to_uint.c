#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * _pow - find the value of a number raised to
 * a power
 * @x: number
 * @y: power
 *
 * Return: solution
 */
int _pow(int x, int y)
{
	if (y == 0)
		return (1);
	return (x * _pow(x, y - 1));
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int length, i, d;
	unsigned int dec = 0;

	if (b == NULL)
		return (0);
	length  = strlen(b);
	for (i = 0; i < length; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			d = b[i] - '0';
			dec += _pow(2, length - i - 1) * d;
		}
		else
		{
			return (0);
		}
	}
	return (dec);
}
