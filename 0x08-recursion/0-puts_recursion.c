#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
 *
 * Description: This function recursively prints each character of the input
 * string 's' followed by a new line until the null terminator is reached.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
