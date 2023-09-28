#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number for which the factorial is calculated.
 *
 * This function calculates the factorial of a non-negative integer 'n'.
 *
 * Return: The factorial of 'n', or -1 if 'n' is negative.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1); /* Error: Negative numbers do not have a factorial. */
	}
	else if (n == 0 || n == 1)
	{
		return (1); /* Base case: Factorial of 0 and 1 is 1. */
	}
	else
	{
		return (n * factorial(n - 1)); /* Recursive calculation of factorial. */
	}
}
