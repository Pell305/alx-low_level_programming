#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Description: This function recursively calculates the length of the input
 * string 's'.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0); /* Base case: If the string is empty, its length is 0. */
	}

/* Recursively call with the next character. */
	return (1 + _strlen_recursion(s + 1));
}
