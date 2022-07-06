#include <unistd.h>
#include "main.h"

/**
 * jack_bauer - print minutes of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i = 48, j, k, n;

	while (i <= 50)
	{
		_putchar(i);
		j = 48;

		while (j <= 51)
		{
			_putchar(j);
			_putchar(58);
			k = 48;

			while (k <= 53)
			{
				_putchar(k);
				n = 48;

				while (n <= 57)
				{
					_putchar(n);
					_putchar('\n');
					n++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
