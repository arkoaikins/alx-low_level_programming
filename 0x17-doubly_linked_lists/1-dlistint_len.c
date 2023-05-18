#include "lists.h"

/**
 * dlistint_len - computes the number of nodes in a dlinked list
 * @h: pointer to head of the dlinked list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++)
		h = h->next;
	return (nodes);
}
