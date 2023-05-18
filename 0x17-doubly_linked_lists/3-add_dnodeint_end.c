#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end of a dlinked list
 * @head: double pointer to pointer to head node
 * @n: integer value to add to new element
 * Return: address of new element
 *         NULL if failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_element, *tmp;

	new_element = malloc(sizeof(dlistint_t));
	if (!new_element)
		return (NULL);

	new_element->n = n;
	new_element->next = NULL;

	if (!*head)
		*head = new_element;
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;

		tmp->next = new_element;
		new_element->prev = tmp;
	}

	return (new_element);
}
