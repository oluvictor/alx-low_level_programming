#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatinate 2 strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes from s2 to concatinate
 *
 * Return: pointer that should point to a newly allocated space in
 * memory which contains the contents of s1, followed
 * by the contents of s2, and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	char *new_str;
	unsigned int s1_size = 0, s2_size = 0, length = 0;

	if (s1 != NULL)
	{
		s1_size = strlen(s1);
	}
	i = 0;
	if (s2 != NULL)
	{
		s2_size = strlen(s2);
		s2_size = n <= s2_size ? n : s2_size;
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
