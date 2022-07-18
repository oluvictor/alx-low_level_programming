#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to position to begin filling
 * @b: character to fill
 * @n: number of bytes of memory to fill
 *
 * Return: pointer to the memory area of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			*(s + i) = b;
		}
	}

	return (s);
}
