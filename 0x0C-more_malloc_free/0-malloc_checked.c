#include "main.h"

/**
 *malloc_checked - function that allocates memory using malloc
 *@b:The amount of memory to be allocated
 *Return: pointer to the allocated memory.
 *
 */

void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);

	if (memory == NULL)
		exit(98);

	return (memory);
}
