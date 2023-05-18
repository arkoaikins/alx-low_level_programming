#include "lists.h"
/**
 * print_dlistint - print all the elements of a dlistint_t list
 * @h: points to the head of the dlinked list
 *
 * Return: number of nodes in dlist
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
