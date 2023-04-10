#include "main.h"
#include <stdio.h>
/**
 * print_binary -  function that prints the binary representation of a number.
 * @n: The number in which its binary representation is to be printed
 * Return: Nothing because it is a void function
 */

void print_binary(unsigned long int n)
{
	char binary[65] = {0};
	int i = 0;
	int j;

	if (n == 0)
	{
		_putchar ('0');
		return;
	}
	while (n > 0)
	{
		binary[i++] = (n & 1) ? '1' : '0';
		n  >>= 1;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar (binary[j]);
}
