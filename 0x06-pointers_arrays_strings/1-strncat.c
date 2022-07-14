#include "main.h"
#include <stdio.h>

/**
 * _strncat - use at most n bytes from src to
 * concatenate two strings
 * @dest: initial string
 * @src: appended string
 * @n: number of bytes to use from src
 *
 * Return: concatinated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int marker = 0;

	while (*(dest + i))
	{
		marker++;
		i++;
	}
	for (i = 0; i < n; i++, marker++)
	{
		if(*(src + i) == '\0')
			break;
		*(dest + marker) = *(src + i);
	}
	*(dest + marker) = '\0';
	return (dest);
}
