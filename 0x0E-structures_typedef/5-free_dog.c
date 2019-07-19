#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Function that creates a new dog.
 * @d: type pointer struct data.
 * Return: 0.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
