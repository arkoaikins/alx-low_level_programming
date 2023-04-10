#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *             to get from one number to another.
 * @n: The first number.
 * @m: The second number to flip n to.
 *
 * Return: number of bits to flip to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_difference = n ^ m;
	unsigned int count = 0;
	int i;

	for (i = 0; i < 64; i++)
	{
		if ((bit_difference >> i) & 1)
			count++;
	}
	return (count);
}
