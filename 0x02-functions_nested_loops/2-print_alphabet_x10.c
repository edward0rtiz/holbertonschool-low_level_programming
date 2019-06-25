#include "holberton.h"
/**
 * Main: Print alphabet in lower case 10 times
 * Description: use _putchar.c
 * Return: 0
 */

void print_alphabet_x10(void)

{
	char c;
	char d;

	for (c = 0; c <= 9; c++)
	{
		for (d = 'a'; d <= 'z'; d++)
		{
			_putchar(d);
		}
		_putchar('\n');
	}
}
