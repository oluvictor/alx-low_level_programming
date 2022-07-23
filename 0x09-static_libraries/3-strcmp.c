#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares 2 strings
 * @s1: initial string
 * @s2: string for comparison
 *
 * Return: -1, 0 or +1 if s1 is less, equal or more than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int s1_size = 0;
	int s2_size = 0;
	int r;

	while (*(s1 + i) != '\0')
	{
		s1_size += *(s1 + i);
		i++;
	}
	i = 0;
	while (*(s2 + i) != '\0')
	{
		s2_size += *(s2 + i);
		i++;
	}
	if (s1_size < s2_size)
		r = -15;
	else if (s1_size > s2_size)
		r = 15;
	else
		r = 0;
	return (r);
}
