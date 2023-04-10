#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The bit
 * @index: index starting from 0 of the bit to get
 *
 * Return: value of bit at index,or -1 if Error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int bit_value;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	bit_value = !!(n & mask);

	return (bit_value);
}

