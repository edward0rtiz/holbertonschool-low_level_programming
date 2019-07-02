#include "holberton.h"
#include <stdio.h>
/**
 * puts_half - Print half of string.
 * @str: Type char pointer
 * @num: Type char
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int n;
	char num;

	for (n = 0; str[n] != 0; n++)
	{
	}
	for (n /= 2; str[n] != 0; n++)
	{
		num = str[n];
		_putchar(num);
	}
	_putchar('\n');
}
