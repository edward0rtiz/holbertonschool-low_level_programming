#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a dlistint list
 * @head: type pointer dlistint node
 * @index: type unsigned int index position of the node
 * Return: return head
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
