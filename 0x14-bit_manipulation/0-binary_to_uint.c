#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *  binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to the string of 0 and 1 chars
 * Return: the total number of integer
 *
 */

unsigned int binary_to_uint(const char *b)
{
	int total = 0;
	int mult_bin = 1;
	int string_length = strlen(b);
	int i;

	for (i = string_length - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			total += mult_bin;

		mult_bin *= 2;
	}
	return (total);
}
