#include "main.h"

/**
 * sqrt_recursive - Recursively calculates the square root.
 * @n: The number for which to find the square root.
 * @guess: The current guess for the square root.
 *
 * Description: This function recursively approximates the square root of a
 * non-negative integer 'n' using the Newton-Raphson method.
 *
 * Return: The square root if found, or -1 if 'n' does not have a
 * natural square root.
 */
int sqrt_recursive(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess); /* Found the square root. */
	}
	else if (guess * guess > n)
	{
		return (-1); /* 'n' does not have a natural square root. */
	}
	else
	{
		return (sqrt_recursive(n, guess + 1));
		/* Recursively search for the square root. */
	}
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * Description: This function checks if 'n' is non-negative and then calls the
 * recursive helper function to find the square root.
 *
 * Return: The square root if found, or -1 if 'n' is negative or does not have
 * a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1); /* Error: Negative numbers do not have a natural square root. */
	}
	return (sqrt_recursive(n, 0)); /* Call the recursive helper function. */
}
