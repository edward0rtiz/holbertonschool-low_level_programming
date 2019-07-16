#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - free the 2 dimensional array of int using alloc_grid
 * @ac: type int argc
 * @av: type char array argv
 * Return: Null if ac == 0 or av == 0 or if pointer return fails.
 */
char *argstostr(int ac, char **av)
{
	char *p, *dp;
	int x, y, total;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0, total = 0; x < ac; x++)
	{
		for (y = 0; *((av[x]) + y) != '\0'; y++, total++)
			;
		total++;
	}
	total++;

	p = malloc(total * sizeof(char));
	if (p == NULL)
		return (NULL);
	dp = p;
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			*p = av[x][y];
			p++;
		}
		*p = '\n';
		p++;
	}
	return (dp);
}
