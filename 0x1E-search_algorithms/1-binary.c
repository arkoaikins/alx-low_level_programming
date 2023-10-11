#include "search_algos.h"
#include <stdio.h>

/**
 * print_subarray - Prints the subarray being searched
 * @array: The array to print
 * @low: The lowest index of the subarray
 * @high: The highest index of the subarray
 */
void print_subarray(int *array, int low, int high)
{
	int i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
		{
			printf(", ");
		}
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array using Binary search
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;

	if (array == NULL)
		return (-1);


	while (low <= high)
	{
		int mid = (low + high) / 2;

		print_subarray(array, low, high);

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}

	print_subarray(array, low, high);
	return (-1);
}
