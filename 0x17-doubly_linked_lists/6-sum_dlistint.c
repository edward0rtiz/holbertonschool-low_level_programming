#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a dlistint list
 * @head: type pointer dlistint node
 * @index: type unsigned int index position of the node
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;
	while (head)
	{
		add = add + head->n;
		head = head->next;
	}
	return (add);
}
