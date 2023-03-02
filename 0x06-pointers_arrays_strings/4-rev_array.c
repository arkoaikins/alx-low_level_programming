#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - Reverses the content of an array of int
 * @a: array to be reversed.
 * @n: number of elements of the array.
 */

void reverse_array(int *a, int n)
{
	int i, b;

	for (i = 0; i < n--; i++)
	{
		b = a[i];
		a[i] = a[n];
		a[n] = b;
	}
}
