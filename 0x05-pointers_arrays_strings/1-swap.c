#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first interger's pointer
 * @b: second integer's pointer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
