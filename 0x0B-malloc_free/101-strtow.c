#include "main.h"
#include <stdlib.h>

/**
 * count_words - Count the number of words in a string.
 * @str: The string to count words from.
 *
 * Return: Number of words in the string.
 */
int count_words(char *str)
{
	int i, word_count = 0;
	int in_word = 0; /* Flag to track if we are inside a word */

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			if (in_word)
			{
				in_word = 0;
				word_count++;
			}
		}
		else
		{
			in_word = 1;
		}
	}

	if (in_word)
		word_count++;

	return (word_count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: Pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, word_len, word_count;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	word_count = count_words(str);

	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0, k = 0; i < word_count; i++)
	{
		while (str[k] == ' ')
			k++;

		word_len = 0;
		while (str[k + word_len] != ' ' && str[k + word_len] != '\0')
			word_len++;

		words[i] = malloc((word_len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}

		for (j = 0; j < word_len; j++, k++)
			words[i][j] = str[k];

		words[i][j] = '\0';
	}

	words[i] = NULL;
	return (words);
}
