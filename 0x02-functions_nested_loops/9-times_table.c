#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 * times_table - print times table from 0
 *
 * Return: 0 (always success)
 */
void times_table(void)
{
	int j = 0;
	int solution;

	while (j <= 9)
	{
		int i = 0;

		while (i <= 9)
		{
			solution = j * i;
			printf("%d, ", solution);
			/*
			 * _putchar(',');
			 * _putchar(32);
			 */
			i++;
		}
		_putchar(10);
		j++;
	}
}
