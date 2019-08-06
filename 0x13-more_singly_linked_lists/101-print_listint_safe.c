#include "lists.h"

/**
 * print_listint_safe - function that prints a safe linked listint with a loop.
 * @head: data type double pointer the head/next node
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_node = NULL;
	const listint_t *lp_node = NULL;
	size_t new_node;

	tmp_node = head;
	if (head == 0)
	{
		exit(98);
	}
	while (tmp_node)
	{
		if(head->next == tmp_node && new_node)
		{
			lp_node = tmp_node;
			printf("lp_node: [%p] %d\n", (void *)lp_node, lp_node->n);
			goto here;
		}
	here:
		printf("[%p] %d\n", (void *)tmp_node, tmp_node->n);
		tmp_node = tmp_node->next;
		new_node++;
	}
	return (new_node);
}
