#include <stdio.h>

/**
 * main - Entry point
 * prints all possible combinations of
 * single-digit numbers separated by comma
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
