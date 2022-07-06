#include <unistd.h>
#include "main.h"

/**
 * times_table - print times table from 0
 *
 * Return: 0 (always success)
 */
void times_table(void)
{
	int j = 0;

	while (j <= 10)
	{
		int i = 97;

		while (i <= 122)
		{
			_putchar(i);
			i++;
		}
		_putchar(10);
		j++;
	}
}
