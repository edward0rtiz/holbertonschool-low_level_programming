#include "lists.h"

/**
 * print_listint_safe - function that prints a safe linked listint with a loop.
 * @head: data type double pointer the head/next node
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_node = NULL;
	const listint_t *l_node = NULL;
	size_t counter = 0;
	size_t new_node;

	tmp_node = head;
	if (head == 0)
	{
		exit(98);
	}
	while (tmp_node)
	{
		printf("[%p] %d\n", (void *)tmp_node, tmp_node->n);
		counter++;
		tmp_node = tmp_node->next;
		l_node = head;
		new_node = 0;
		while (new_node < counter)
		{
			if (tmp_node == l_node)
			{
				printf("l node: [%p] %d\n", (void *)tmp_node, tmp_node->n);
				return (counter);
			}
			l_node = l_node->next;
			new_node++;
		}
	}
	return (counter);
}
