#include <unistd.h>
#include "main.h"
/**
 * _islower - checks if a charachter is lowercase
 * @c: the character to be checked
 *
 * Return: 1 if lowercase, 0 if not
 */
int _islower(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
