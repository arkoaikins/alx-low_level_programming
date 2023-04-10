#include "main.h"
#include <stdio.h>
/**
 *
 *
 *
 *
 *
 */

void print_binary(unsigned long int n)
{
	char binary[65] = {0};
	int i = 0;
	int j;

	while (n > 0)
	{
		binary[i++] =( n & 1) ? '1' : '0';
		n  >>= 1;
		
	}
	for (j = i - 1; j >= 0; j--)
		_putchar (binary[j]);
}
