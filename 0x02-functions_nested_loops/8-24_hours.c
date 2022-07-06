#include <unistd.h>
#include "main.h"

/**
 * jack_bauer - print minutes of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i = 48;

	while (i <= 50)
	{
		_putchar(i);
		int j = 48;

		while (j <= 51)
		{
			_putchar(j);
			_putchar(58);
			int k = 48;

			while (k <= 53)
			{
				_putchar(k);
				int n = 48;

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
