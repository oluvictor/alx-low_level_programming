#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @needle: substring to locate
 * @haystack: string where search is done
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if no such substring is found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j = 0;
	int start_flag = 0;
	int finish_flag = 0
	char *p = NULL;

	for (i = 0; needle[i]; i++)
	{

		for (j = 0; haystack[j]; j++)
		{
			if (needle[i] == haystack[j])
			{
				p = (s + i);
				stop_flag = 1;
				break;
			}
		}
		if (stop_flag == 1)
		{
			break;
		}
	}
	return (p);
}
