#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: type dpointer of next and prev node
 * @index: type unisgned int index of node
 * Return: 1 if success or -1 if node NULL
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp_node = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (temp_node == NULL)
			return (-1);
		temp_node = temp_node->next;
	}
	if (temp_node == *head)
	{
		*head = temp_node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		temp_node->prev->next = temp_node->next;
		if (temp_node->next != NULL)
			temp_node->next->prev = temp_node->prev;
	}
	free(temp_node);
	return (1);
}
