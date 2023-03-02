#include <unistd.h>

/**
 * main - the starting point of the code
 * _putchar - prints putchar strint to std output
 * Return 0 if sucessful
 */

int _putchar(char n)
{
	return (write(1, &n, 1));
