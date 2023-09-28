#include "main.h"

/**
 * wildcmp - Compares two strings with wildcard pattern.
 * @s1: The first string.
 * @s2: The second string with wildcard pattern (*).
 *
 * Return: 1 if strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1); /* The pattern * matches any string. */

		if (*s1 == '\0')
			return (wildcmp(s1, s2 + 1)); /* Skip one character in s2. */

		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}

	if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1); /* Both strings have reached the end; they are identical. */
		return (wildcmp(s1 + 1, s2 + 1));
		/* Continue comparing the rest of the strings. */
	}

	return (0); /* Characters do not match. */
}
