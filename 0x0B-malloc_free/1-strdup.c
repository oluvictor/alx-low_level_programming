#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 */
char *_strdup(char *str)
{
	int i = 0;
	char *new_str;
	int str_size = 0;

	if (str != NULL)
	{
		while (str[i])
		{
			str_size++;
			i++;
		}
		new_str = malloc((str_size * sizeof(char)) + 1);
		if (new_str == NULL)
			return (NULL);
		new_str[str_size] = '\0';
		do {
			new_str[str_size - 1] = str[str_size - 1];
		} while (str_size--);
		return (new_str);
	}
	return (NULL);
}
