#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatinate 2 strings
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer that should point to a newly allocated space in
 * memory which contains the contents of s1, followed
 * by the contents of s2, and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *new_str;
	int s1_size = 0, s2_size = 0, length = 0;

	if (s1 != NULL)
	{
		while (s1[i])
		{
			s1_size++;
			i++;
		}
	}
	i = 0;
	if (s2 != NULL)
	{
		while (s2[i])
		{
			s2_size++;
			i++;
		}
	}
	length = s1_size + s2_size;
	new_str = malloc((length * sizeof(char)) + 1);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (i < s1_size)
	{
		new_str[i] = s1[i];
		i++;
	}
	while (i < length)
	{
		new_str[i] = s2[j];
		j++;
		i++;
	}
	new_str[length] = '\0';
	return (new_str);
}
