#include "holberton.h"

/**
 * print_triangle - check the code for Holberton School students.
 * @size: type int
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int a, b, c;

	a = 0;
	b = size - 1;
	while (a < size)
	{
		b = size - 1 - a;
		c = a + 1;
		while (b > 0)
		{
			_putchar(' ');
			b--;
		}
		while (c > 0)
		{
			_putchar('#');
			c--;
		}
		_putchar('\n');
		a++;
	}
	if (size <= 0)
		_putchar('\n');
}
