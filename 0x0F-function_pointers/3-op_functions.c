#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - add two numbers
 * @a: first operand
 * @b: second operand
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - perform subtraction
 * @a: firt operand
 * @b: second operand
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers
 * @a: first number/parameter
 * @b: second number
 * Return: result of the multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - perform the division operation
 * @a: operand 1
 * @b: operand 2
 * Return: result of a / b
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
 * op_mod - prints remainder of division
 * @a: operand 1
 * @b: operand 2
 * Return: remainder of division of a by b
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

