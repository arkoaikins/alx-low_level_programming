#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates array of chars & initializes it with a specific char
 * @size: size of array of char
 * @c: char to initialize array with
 *
 * Return: pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < size; n++)
	{
		s[n] = c;
	}
	return (s);
}
