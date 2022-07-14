#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string to convert
 *
 * Return: pointer to converted string
 */
char *string_toupper(char *s)
{
	int i = 0;
	while (*(s + i) != '\0')
	{
		if ((*(s + i) >= 97) && (*(s + i) <= 121))
			*(s + i) -= 26;
		i++;
	}
	return (s);
}
