#include "holberton.h"
/**
 * _isdigit - check the code for Holberton School students.
 * @c: type int
 * Return: 1 if it is a digit 0 otherwise.
 */
int _isdigit(int c)
{
	if (c > '0' && c < '10')

		return (1);

	return (0);
}
