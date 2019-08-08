#include "holberton.h"

/**
 * get_bit - return the value of a bit in a given index
 * @n: type unsigned long int input
 * @index: type unsigned int position of unit
 * Return: the value of a bit in an index or -1 if occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
