#include "lists.h"

/**
 * print_list - Print all the elements of a list_t list
 * @h: data type pointer of struct
 * Return: elements of the str i
 */

size_t print_list(const list_t *h)
{
	size_t i;
	const list_t *tmp;

	i = 0;
	tmp = h;
	while (tmp != NULL)
	{
		printf("[%d], %s\n", tmp->len, tmp->str);
			tmp = tmp->next;
			i++;
	}
	return (i);
}
