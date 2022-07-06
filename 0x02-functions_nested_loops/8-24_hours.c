#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - print all lowercase alphabets
 * ten times
 *
 * Return: 0 (always success)
 */
void print_alphabet_x10(void)
{
	int j = 1;

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
