#include "holberton.h"

/**
 * print_line - draw a straigh line in the terminal.
 *
 * Return:If n is 0 or less only print \n.
 */
void print_line(int n)
{
	int line;

	line = 0;
	while (line < n)
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
}
