#include "main.h"

/**
 * _print_rev_recursion - returns length of string
 * @s: pointer to string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s++);
}
