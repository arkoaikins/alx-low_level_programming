#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: The first string
 * @s2:  The second string
 * @n: number of bytes of s2 to copy into s1
 *
 * Return: If the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a;
	unsigned int b;
	unsigned int c;
	char *x;

	if (s1 == NULL)
		a = 0;
	else
	{
		for (a = 0; s1[a]; a++)
			;
	}

	if (s2 == NULL)
		b = 0;
	else
	{
		for (b = 0; s2[b]; b++)
			;
	}

	if (b > n)
		b = n;
	x = malloc(sizeof(char) * (a + b + 1));

	if (x == NULL)
		return (NULL);

	for (c = 0; c < a; c++)
		x[c] = s1[c];

	for (c = 0; c < b; c++)
		x[c + a] = s2[c];

	x[a + b] = '\0';

	return (x);
}
