#include "main.h"

/**
 * _pow_recursion - returns the value of a number raised to a specific power
 * @x: the first parameter
 * @y: the power to raise x to
 * Return: value of x after raising it to the power y
 */

int _pow_recursion(int x, int y)
{
	/* Base case; and y number raised to the power zero is 1 */

	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
