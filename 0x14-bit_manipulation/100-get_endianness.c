#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 If big-endian.
 *         1 If little-endian.
 */  

int get_endianness(void)
{
	int num = 1;
	char *ptr = (char *)&num;

	if (*ptr == 1)
		return 1;
	else
		return 0;
}
