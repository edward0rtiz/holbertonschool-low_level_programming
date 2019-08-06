#include "lists.h"

/**
 * pop_listint - Deletes the head nodeof a listint_t.
 * @head: data type pointer the head/next node
 * Return: head node data n
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	unsigned int return_value;

	if (*head == NULL)
		return (0);

	node = *head;
	return_value = node->n;
	*head = node->next;
	free(node);

	return (return_value);
}
