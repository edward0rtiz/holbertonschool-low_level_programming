#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: type unsigned int
 * @size: type unsigned int size of elements
 * Return: NULL
 */
int *array_range(int min, int max)
{
	int *p;
	int x;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (x = 0; min <= max; x++, min++)
		*(p + x) = min;

	return (p);
}
