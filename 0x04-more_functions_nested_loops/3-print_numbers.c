#include "holberton.h"
/**
 * print_numbers(void) - Print numbers from 0 to 9
 *
 * Return: 0 success
 */
void print_numbers(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
