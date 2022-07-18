#include <stddef.h>
#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: Haystack
 * @c: Needle
 *
 * Return: pointer to position of c
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	char *p = NULL;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			p = (s + i);
			break;
		}
	}
	return (p);
}
