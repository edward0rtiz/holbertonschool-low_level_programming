#include "holberton.h"
/**
 * Main: Print alphabet in lower case
 * Description: use _putchar.c
 * Return: 0
 */

void print_alphabet(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

}
