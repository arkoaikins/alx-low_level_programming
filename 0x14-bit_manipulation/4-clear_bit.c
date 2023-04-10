/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n:  A pointer to  the bit number you want to set
 * @index: index at which you want to set bit value
 *
 * Return: 1 if it worked,else return -1 if error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_position;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	bit_position = 1UL << index;
	bit_position = ~bit_position;
	*n = *n & bit_position;

	return (1);
}
