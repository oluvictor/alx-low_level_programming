#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - print all lowercase alphabets
 *
 * Return: 0 (always success)
 */
void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar(10);
}
