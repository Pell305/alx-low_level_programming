#include "function_pointers.h"

/**
 * print_name - Prints a name using a custom printing function.
 * @name: The name to print.
 * @f: A pointer to a function that formats and prints the name.
 *
 * Description: This function takes a name and a function pointer as arguments.
 * It calls the function pointed to by the function pointer, passing the name
 * as an argument, to print the name in a custom format.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
