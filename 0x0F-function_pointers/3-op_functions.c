#include "3-calc.h"
/**
 * op_add - adds 2 intergers
 * @a: first integer
 * @b: second integer
 *
 * Return: adition of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts 2 intergers
 * @a: first integer
 * @b: second integer
 *
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 intergers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 intergers
 * @a: first integer
 * @b: second integer
 *
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 * op_mod - finds remainder of 2 intergers
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of a and b after dividion
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
