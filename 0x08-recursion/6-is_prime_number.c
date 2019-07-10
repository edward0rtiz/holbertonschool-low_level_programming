#include "holberton.h"
#include <stdio.h>

/**
 * funct_prime - Allows operation of _sqrt_recursion
 * @x: type int that define sqrt root
 * @y: type int that compares x
 * Return: sqrt int or -1 if not int
 */

int funct_prime(int x, int y)
{
	if ((y * y) == x || x < 0)
		return (0);
	else if ((y * y) > x)
		return (1);
	else
		return (funct_prime(x, (y + 1)));
}

/**
 * is_prime_number - function that returns the natural sqr root number.
 * @n: type int
 * Return: If n not sqt root then return -1
 */
int is_prime_number(int n)
{
	return (funct_prime(n, 0));
}
