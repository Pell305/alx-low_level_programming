#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to find the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * is_palindrome_recursive - Checks if a string is a palindrome recursively.
 * @s: The string to check for palindromicity.
 * @start: The start index of the string.
 * @end: The end index of the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1); /* Base case: It's a palindrome. */
	}
	else if (s[start] != s[end])
	{
		return (0); /* Characters don't match; not a palindrome. */
	}
	else
	{
		return (is_palindrome_recursive(s, start + 1, end - 1));
		/* Check next characters. */
	}
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Description: This function checks if the input string 's' is a palindrome
 * by calling a recursive helper function.
 *
 * Return: 1 if 's' is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);

	if (length <= 1)
	{
		return (1); /* An empty string or a single character is a palindrome. */
	}
	else
	{
		return (is_palindrome_recursive(s, 0, length - 1));
		/* Call the recursive helper function. */
	}
}
