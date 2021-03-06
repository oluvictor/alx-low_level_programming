#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 *
 * Return: void;
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j >= 1; j--)
				_putchar(32);	/* space */
			for (k = 1; k <= i; k++)
				_putchar(35);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
