#include "holberton.h"

/**
 * get_endianness - sets the value of a bit to 1 at a given index
 * Return: 1 if little endian 0 if big endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *j = (char *)&i;

	if (*j)
		return (1);
	return (0);
}
