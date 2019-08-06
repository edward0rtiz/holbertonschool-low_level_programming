#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node in a given position.
 * @head: data type pointer the head/next node
 * @idx; data type unsigned int index
 * @i: data type int
 * Return: new_node
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp_node;
	int sum = 0;

	if (!head)
		return (0);

	tmp_node = head;
	while(tmp_node)
	{
		sum += tmp_node->n;
		tmp_node = tmp_node->next;
	}
	return (sum);
}
