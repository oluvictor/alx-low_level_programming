#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to the counted
 *
 * Return: lenth of string
 */
int _strlen(char *s)
{
	int size = 0;
	int i = 0;

	while (*(s + i) != 0)
	{
		size  += 1;
		/*printf("size: %c", *(s + i));*/
		i++;
	}
	return (size);
}
