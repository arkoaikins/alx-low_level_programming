#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: A pointer to a pointer to the head node of the list.
 * @n: The integer to add the new node.
 *
 * Return: return NULL,if failed
 *         else,return the address of the new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new_element;

	if (head == NULL)
	{
		return (NULL);
	}
	new_element = malloc(sizeof(listint_t));
	if (new_element == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_element;

	return (new_element);
}
