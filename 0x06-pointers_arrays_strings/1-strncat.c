#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - Concatenates two strings using
 *            inputted number of bytes from src.
 * @dest: pointer to destination to be appended upon.
 * @src: pointer to string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	while (*dest != '\0')
	{
		dest++;
	}
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest);
}

