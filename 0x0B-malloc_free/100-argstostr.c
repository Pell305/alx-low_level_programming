#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: Pointer to a new string containing the concatenated arguments
 *         followed by '\n' characters, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int total_length = 0;
	char *concatenated;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_length++;
		total_length++; /* Add 1 for '\n' character */
	}

	/* Allocate memory for the concatenated string */
	concatenated = malloc((total_length + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	/* Copy arguments and add '\n' characters */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			concatenated[k++] = av[i][j];
		concatenated[k++] = '\n';
	}

	concatenated[k] = '\0';

	return (concatenated);
}
