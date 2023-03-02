#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  *_strcat - concatenates two strings
  * @dest: pointer to the string that is to be concatenated
  * @src: Source string to add to the destination
  *
  * Return: a pointer to the resulting string dest
  */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
