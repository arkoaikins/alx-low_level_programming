#include "lists.h"

/**
 * free_dlistint - frees a dlinked list
 * @head: pointer to head of the dlinked lis
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *old_element, *new_element;

	/* to keep track of node(s) when traversing */
	old_element = head;
	new_element = head;

	while (new_element)
	{
		new_element = new_element->next;
		free(old_element);
		old_element = new_element;
	}
}
