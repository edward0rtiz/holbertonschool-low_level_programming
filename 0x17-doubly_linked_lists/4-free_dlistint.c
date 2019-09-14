#include "lists.h"

/**
 * free_dlistint - function that free a dlistint list
 * @head: type pointer dlistint node
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_node;

	while (head)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}
