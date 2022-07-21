#include "main.h"

/**
 * _sprt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: square root of n else -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (-1);
	if ((n - 1) * (n - 1) == n)
		return n;
	else
		return _sqrt_recursion(n - 1);
}
