#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the list.
 * Return: The number of nodes in the list(counter).
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	do {
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	} while (h != NULL);

	return (counter);
}
