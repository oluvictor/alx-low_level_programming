#include <unistd.h>
#include "main.h"

/**
 * jack_bauer - print minutes of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i, j, k, n;

	for (i = 48; i <= 50; i++)
	{
		_putchar(i);
		for (j = 48; j <= 51; j++)
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
					n++;
				}
				k++;
			}
		}
		_putchar('\n');
	}
}
