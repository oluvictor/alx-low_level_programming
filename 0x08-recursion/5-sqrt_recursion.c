#include "main.h"

/**
 * _my_sqrt - returns the natural square root of a number
 * @n: number
 * @root: trial square oot
 *
 * Return: square root of n else -1
 */
int _my_sqrt(int n, int root)
{
	if (root * root > n)
		return (-1);
	if (root * root == n)
		return (root);
	return (_my_sqrt(n, ++root));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: square root of n else -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_my_sqrt(n, 1));
}
