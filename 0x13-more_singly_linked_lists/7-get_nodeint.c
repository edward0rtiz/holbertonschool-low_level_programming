#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a listint_t linked list.
 * @head: data type pointer the head/next node
 * @index: data type unsigned int index
 * Return: head node data n
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp_node = head;
	unsigned int counter = 0;

	for (; tmp_node && counter < index; counter++)
	{
		tmp_node = tmp_node->next;
	}
	return (tmp_node);
}
