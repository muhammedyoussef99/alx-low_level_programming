#include "function_pointers.h"

/**
 * array_iterator - execute a function pointer on each element of an array
 * @array: array of integers
 * @size: size of array
 * @action: A pointer to the function to execute on each element.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (size_t i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
