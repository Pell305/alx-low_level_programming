#include "main.h"

/**
* print_alphabet_x10 - This function prints the alphabet 10 times
* in lowercase, followed by a newline
*/
void print_alphabet_x10(void)
{
	int k, i;

	for (i = 0; i < 10; i++)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
}
