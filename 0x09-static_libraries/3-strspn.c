#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to Haystack
 * @accept: pointer to search prefix phrase
 *
 * Return: number of bytes in initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j = 0;
	int num = 0;
	int stop_flag = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			stop_flag = 0;
			if (s[i] == accept[j])
			{
				num++;
				stop_flag = 1;
				break;
			}
		}
		if (stop_flag == 0)
		{
			break;
		}
	}
	return (num);
}
