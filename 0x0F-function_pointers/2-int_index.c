#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: array to search
 * @size: the number of elements in the array array.
 * @cmp:  a pointer to the function to be used to
 *        compare values.
 * Return: first index for which cmp doesn't return 0
 *         or (-1) if no element matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size > 0 && cmp && size && array)
		for (a = 0; a <= size; a++)
			if (cmp(array[a]))
				return (a);
	return (-1);

}
