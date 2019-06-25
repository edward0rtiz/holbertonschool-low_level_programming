#include "holberton.h"
/**
 * print_sign - Print the sign of a number
 * @n: Type int n
 * Return: 0, 1, -1
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
