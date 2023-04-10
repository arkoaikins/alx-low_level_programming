#include "main.h"
#include <stdio.h>

/**
 * print_binary -  function that prints the binary representation of a number.
 * @n: The number in which its binary representation is to be printed
 * Return: Nothing because it is a void function
 */

void print_binary(unsigned long int n)
{
	if (n < 2)
	{
		_putchar (n + '0');
		return;
	}
	print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
