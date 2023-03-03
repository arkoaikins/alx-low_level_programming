#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - Copies a string.
 *
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 * @n: Maximum number of bytes to copy from src.
 *
 * Return: Pointer to resulting string dest.
 */
char *_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

