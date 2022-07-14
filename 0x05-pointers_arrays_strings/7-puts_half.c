#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: pointer to string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int size = 1;
	int mid_point;

	while (*(str + i) != 0)
	{
		++size;
		i++;
	}

	if (size % 2 == 0)
		mid_point = size / 2;
	else
		mid_point = (size - 1) / 2;
	for (i = mid_point; i < size - 1; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
