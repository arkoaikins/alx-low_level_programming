#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: A pointer to the bit you want to set
 * @index: The index starting from 0 if the bit you want to set
 *
 * Return: 1 if it worked, else -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_position = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	bit_position <<= index;
	*n |= bit_position;
	return (1);
}

