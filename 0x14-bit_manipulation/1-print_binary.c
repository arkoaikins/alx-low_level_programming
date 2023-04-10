#include "main.h"
#include <stdio.h>
/**
 * print_binary -  function that prints the binary representation of a number.
 * @n: The number in which its binary representation is to be printed
 * Return: Nothing because it is a void function
 */

void print_binary(unsigned long int n)
{
	unsigned long int bit_position = 1;
	int bit_number = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while ((n >> bit_number) != 0)
		bit_number++;

	bit_number--;


	while (bit_number >= 0)
	{
		if ((n & (bit_position << bit_number)) != 0)
			_putchar ('1');
		else
			_putchar ('0');
		bit_number--;
	}
}
