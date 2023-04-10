#include "main.h"



/**
 *  binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to the string of 0 and 1 chars
 * Return: 0 if b isNULL,or one more chars is not 0 or 1
 *         or the total number of integer
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;


	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
			total <<= 1;
			total |= (*b - '0');
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (total);
}
