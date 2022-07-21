#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: pointer to string
 *
 * Return: void
 */
void rev_string(char *s)
{
	char temp, end;
	int i = 0;
	int size = 0;

	while (*(s + i) != '\0')
	{
		++size;
		i++;
	}
	end  = size-1;

	for (i = 0; i <= (size / 2); i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + end);
		*(s + end)  = temp;
		end--;
	}
}
