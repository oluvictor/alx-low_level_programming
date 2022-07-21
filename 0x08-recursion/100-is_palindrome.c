#include "main.h"
#include <stddef.h>

/**
 * is_pelindrome - returns 1 if a string is a palindrome
 * and 0 if not
 * @s: pointer to string
 *
 * Return:  returns 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
