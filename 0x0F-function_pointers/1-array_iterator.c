#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given
 *                  as a parameter on each element of an array.
 * @array: array to execute
 * @size: size of the array
 * @action: pointer to the function to execute
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array && action)
	{
		for (a = 0; a < size; a++)
		{
			action(array[a]);
		}
	}
}
