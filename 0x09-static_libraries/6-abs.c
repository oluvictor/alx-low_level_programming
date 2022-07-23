#include <unistd.h>
#include "main.h"
/**
 * _abs - returs absolute value of an integer
 * @n: the number to be checked
 *
 * Return: absolute value of n
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n / -1);
	}
}
