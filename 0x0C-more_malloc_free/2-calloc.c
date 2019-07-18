#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: type unsigned int
 * @size: type unsigned int
  * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int x;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (x = 0; x < nmemb; x++)
		*(p + x) = 0;

	return (p);
}
