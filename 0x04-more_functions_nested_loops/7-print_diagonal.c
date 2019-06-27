#include "holberton.h"

/**
 * print_diagonal - print a diagonal line in the terminal.
 * @n: Type int
 * description: can only use _putchar
 */

void print_diagonal(int n)
{
	int tab, row;

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
