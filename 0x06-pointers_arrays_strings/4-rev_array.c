#include "main.h"

/**
 * reverse_array - revers the content of an array of integers
 * @a: pointer to array
 * @n: number of elements int he array
 *
 * Return: concatinated string
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int end = n - 1;
	int tmp = 0;

	for (i = 0; i < (n / 2); i++)
	{
		tmp = *(a + i);
		*(a + i) = *(a + end);
		*(a + end)  = tmp;
		end--;
	}
}
