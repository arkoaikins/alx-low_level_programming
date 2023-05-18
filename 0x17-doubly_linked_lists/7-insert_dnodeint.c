#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at a given position
 * @h: double pointer to head of dlinked list
 * @idx: index at which to insert thenew node
 * @n: data to enter new node
 * Return: address of new node
 *         else NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_element, *now;
	unsigned int count = 0;

	if (!*h && idx != 0)
		return (NULL);

	new_element = malloc(sizeof(dlistint_t));
	if (!new_element)
		return (NULL);
	new_element->n = n;
	new_element->next = NULL;
	new_element->prev = NULL;

	if (!*h && idx == 0)
	{
		new_element->prev = *h;
		*h = new_element;
		return (new_element);
	}
	if (idx == 0)
	{
		new_element->next = *h;
		(*h)->prev = new_element;
		*h = new_element;
		return (new_element);
	}
	now = *h;
	while (count < idx - 1)
	{
		count++;
		now = now->next;
		if (!now)
			return (NULL);
	}
	if (now->next)
		now->next->prev = new_element;
	new_element->next = now->next;
	new_element->prev = now;
	now->next = new_element;
	return (new_element);
}
