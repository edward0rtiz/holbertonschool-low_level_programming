#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: data type listint_t double pointer of head
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *safe_node = *h;
	listint_t *tmp_node;

	while (!safe_node)
	{
		counter++;
		tmp_node = safe_node;
		safe_node = safe_node->next;
		free(tmp_node);

		if (tmp_node < safe_node)
			break;
	}
	*h = NULL;
	return (counter);
}
