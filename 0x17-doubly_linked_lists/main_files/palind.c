#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "lists.h"

/**
 * add_dnodepalind - Create a linkedlist of N numbers
 * @number: Product number to be checked
 * Return: 1 success
 */
int add_dnodepalind(int number)
{
	dlistint_t *node;
	dlistint_t *head;
	dlistint_t *temp_node;
	int counter, i;

	head = NULL;
	while (number != 0)
	{
		add_dnodeint(&head, number % 10);
		number /= 10;
	}
	counter = 1;
	temp_node = node = head;
	while (temp_node->next)
	{
		counter++;
		temp_node = temp_node->next;
	}
	i = 0;
	while (i <= counter /2 )
	{
		if (node->n == temp_node->n)
		{
			node = node->next;
			temp_node = temp_node->prev;
		}
		else
		{
			free_dlistint(head);
			return (-1);
		}
		i++;
	}
	free_dlistint(head);
	return (1);
}

/**
 * find_palind - find palindrome of product of 3 digits
 * Return: void
 */

void find_palind()
{
	int a, b, number, temp, fd, counter;
	char buf[6];

	temp = 0;
	for (a = 999; a > 100; a--)
	{
		for (b = 999; b > 100; b--)
		{
			number = a * b;
			if (add_dnodepalind(number) == 1)
			{
				if (number > temp)
					temp = number;
			}
		}
	}
	fd = open("102_palind", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
		exit (98);
	counter = 0;
	while (temp != 0)
	{
		buf[counter] = temp % 10 + '0';
		temp /= 10;
		counter++;
	}
	write(fd, buf, 6);
}
