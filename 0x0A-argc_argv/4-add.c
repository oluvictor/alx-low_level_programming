#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: int argument
 * @argv: pointer to array of string arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 0)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= '0' && *argv[i] <= '9')
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
	printf("0\n");
	return (0);
}
