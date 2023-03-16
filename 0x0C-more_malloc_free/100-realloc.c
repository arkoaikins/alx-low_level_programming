#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free.
 * @ptr: pointer to the memory previously allocated
 *       with a call to malloc: malloc(old_size).
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: Null if new_size == 0 , ptr is not null.
 *         Ptr if new_size == old_size
 *         Pointer to newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;
	unsigned int limit;
	char *ptr_copy;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}

	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	limit = new_size;
	if (new_size > old_size)
		limit = old_size;

	ptr_copy = ptr;
	for (i = 0; i < limit; i++)
		p[i] = ptr_copy[i];

	free(ptr);

	return (p);
}
