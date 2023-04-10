#include "main.h"

/**
 *
 *
 *
 *
 *
 */

void print_binary(unsigned long int n)
{
	char binary[];
	int i = 0;

	while (n > 0)
	{
		binary[i] = n & 1;
		n = n >> 1;
		i++
	}
}
