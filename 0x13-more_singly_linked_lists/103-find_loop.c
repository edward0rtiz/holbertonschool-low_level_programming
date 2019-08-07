#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: data type listint_t double pointer of head
 * Return: the size of the list that was free'd
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first_loop = head;
	listint_t *second_loop = head;

	while (first_loop && second_loop && second_loop->next)
	{
		first_loop = first_loop->next;
		second_loop = second_loop->next->next;

		if (first_loop == second_loop)
			return (first_loop);
	}
	return (NULL);
}
