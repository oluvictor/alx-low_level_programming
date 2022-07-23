#include <stdio.h>

/**
 * main - multiplies 2 numbers
 * @argc: int argument
 * @argv: pointer to array of string arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc == 3)
	{
		num1 = (int) *argv[1] - '0';
		num2 = (int) *argv[2] - '0';
		printf("%d\n", num1 * num2);
		return (0);
	}
	printf("Error\n");
	return (-1);
}
