#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to convert
 *
 * Return: pointer to converted string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if ((*(s + i) == ',') || (*(s + i) == ';') || (*(s + i) == '.') ||
				(*(s + i) == ' ') || (*(s + i) == '\t') || (*(s + i) == '\n') ||
				(*(s + i) == '!') || (*(s + i) == '?') || (*(s + i) == '\"') ||
				(*(s + i) == '(') || (*(s + i) == ')') || (*(s + i) == '{') ||
				(*(s + i) == '}'))
		{
			if ((*(s + i + 1) >= 97) && (*(s + i + 1) <= 121))
			*(s + i + 1) -= 32;
		}
		i++;
	}

	return (s);
}
