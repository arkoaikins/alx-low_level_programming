#include "main.h"

/**
 *_puts_recursion - this is a funtion to print string
 *                  followed by a new line.
 * @s :this is the pointer to which the sting is stored
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
		return;
	}
	_putchar (*s);
	s++;
	_puts_recurssion(s);
}
