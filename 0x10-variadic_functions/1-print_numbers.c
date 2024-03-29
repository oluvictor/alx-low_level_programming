#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - sum of all its parameters
 * @n: number of parameters
 * @separator: string to be printed between numbers
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int i;

	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(va, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(va);
	printf("\n");
}
