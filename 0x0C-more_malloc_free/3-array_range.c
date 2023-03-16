#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: The first array value(minimum)
 * @max: The last value(maximum)
 *
 * Return: the pointer to the newly created array
 *         if min > max, return NULL
 *         if malloc fails, return NULL.
 *
 */

int *array_range(int min, int max)
{
	int i;
	int len;
	int *a;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	a = malloc(sizeof(int) * len);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < len; i++, min++)
	{
		a[i] = min;
	}

	return (a);
}
