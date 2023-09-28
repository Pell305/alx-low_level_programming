#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed in reverse.
 *
 * Description: This function recursively prints the characters of the input
 *              string 's' in reverse order.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return; /* Base case: If string is empty, do nothing (end of recursion). */
	}

	/* Recursively call with the next character. */
	_print_rev_recursion(s + 1);

	_putchar(*s); /* Print the current character. */
}
