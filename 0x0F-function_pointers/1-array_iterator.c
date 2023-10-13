#include "function_pointers.h"


/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array to process.
 * @size: The size of the array.
 * @action: A pointer to the function to apply to each element.
 *
 * Description: This function applies the given function to each element of
 * the array. It takes an array, its size, and a function pointer as arguments.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
