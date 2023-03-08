#include "main.h"

/**
 *_pow_recursion - function that returns the value of x
 *                 raised to the power of y.
 *@x: x raised to the power y
 *@y: the power number on x
 *Return: -1 if y is lower than o
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

