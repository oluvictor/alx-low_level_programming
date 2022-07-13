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
	char temp;
	int i = 0;
	int size = 0;


	while (*(s + i))
	{
		/*str[i] = *(s + i);*/
		++size;
		i++;
	}
	/*char str[size];*/

	for (i = 0; i < size/2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + size);
		*(s + size)  = temp;
		size--;
		_putchar(temp);
	}
}
