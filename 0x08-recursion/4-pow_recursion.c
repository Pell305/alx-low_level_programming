#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base.
 * @y: The exponent.
 *
 * Description: This function recursively calculates the value of 'x' raised
 * to the power of 'y'.
 *
 * Return: The result of x^y. If 'y' is lower than 0, returns -1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1); /* Error: Negative exponent is not supported. */
	}
	else if (y == 0)
	{
		return (1); /* Base case: Any number raised to the power of 0 is 1. */
	}
	else
	{
		return (x * _pow_recursion(x, y - 1)); /* Recursive calculation of x^y. */
	}
}
