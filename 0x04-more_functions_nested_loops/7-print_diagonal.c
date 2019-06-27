#include "holberton.h"

/**
 * print_diagonal(int n) - Draw a diagonal line in the terminal.
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int slash, row;

	row = 0;

	while (n > 0)
	{
		tab = row;
		while (tab > 0)
		{
			_putchar(' ');
			tab--;
		}
		_putchar('\\');
		_putchar('\n');
		row++;
		n--;
	}
	if (row < 1)
		_putchar('\n');
}
