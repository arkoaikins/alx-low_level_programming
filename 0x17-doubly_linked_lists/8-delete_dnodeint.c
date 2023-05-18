#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at specific position
 * @head: double pointer to head node
 * @index: position of node to be deleted
 * Return: 1 if successful
 *         else -1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int counter = 0;

	if (!*head)
		return (-1);

	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}
	while (counter < index)
	{
		counter++;
		tmp = tmp->next;

		if (!tmp)
			return (-1);
	}
	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
