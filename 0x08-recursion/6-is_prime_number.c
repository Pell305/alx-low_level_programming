#include "main.h"

/**
 * is_prime_recursive - Recursively checks if a number is prime.
 * @n: The number to check for primality.
 * @divisor: The current divisor to check.
 *
 * This function recursively checks if a number is prime by testing
 * its divisibility with increasing divisors starting from 2.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
	if (n <= 1)
	{
		return (0); /* Numbers less than or equal to 1 are not prime. */
	}
	else if (divisor == n)
	{
		return (1); /* Reached the end without finding a divisor; it's prime. */
	}
	else if (n % divisor == 0)
	{
		return (0); /* Found a divisor; it's not prime. */
	}
	else
	{
		return (is_prime_recursive(n, divisor + 1)); /* Check the next divisor. */
	}
}

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The integer to check.
 *
 * Description: This function checks if the input integer 'n' is a prime number
 * by calling a recursive helper function.
 *
 * Return: 1 if 'n' is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0); /* Numbers less than or equal to 1 are not prime. */
	}
	else
	{
		return (is_prime_recursive(n, 2)); /* Call the recursive helper function. */
	}
}
