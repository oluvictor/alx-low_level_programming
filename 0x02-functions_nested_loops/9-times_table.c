#include <unistd.h>
#include "main.h"

/**
 * times_table - print times table from 0
 *
 * Return: 0 (always success)
 */
void times_table(void)
{
	int i, j, solution;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			solution = i * j;
			if (j == 0)
			{
				_putchar('0');
			}
			if (solution < 10)
			{
				_putchar(',');
				_putchar(32);
				_putchar(32);
				_putchar(solution + '0');
			}
			if (solution >= 10)
			{
				_putchar(',');
				_putchar(32);
				_putchar((solution / 10) + '0');
				_putchar((solution % 10) + '0');
			}
		}
		_putchar(10);
	}
}
