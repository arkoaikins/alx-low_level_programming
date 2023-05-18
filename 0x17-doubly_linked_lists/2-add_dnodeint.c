#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of d linkedlist
 * @head:doubel pointer to the beginning of the dlinked list
 * @n: value to add to the new node
 * Return: the address to the new element
 *         else return NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_element;

	new_element = malloc(sizeof(dlistint_t));
	if (!new_element)
		return (NULL);

	new_element->n = n;
	new_element->prev = NULL;
	new_element->next = NULL;

	if (!*head)
		*head = new_element;
	else
	{
		new_element->next = *head;
		(*head)->prev = new_element;
		*head = new_element;
	}

	return (new_element);
}
