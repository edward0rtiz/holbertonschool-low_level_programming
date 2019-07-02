#include "holberton.h"
#include <stdio.h>
/**
 * puts2 - Print one char out of 2 of a string.
 * @str: Type char pointer
 * @num: Type char
 * Return: Always 0.
 */
void puts2(char *str)
{
	int a;
	char num;

	for (a = 0; str[a] != 0; a++)
	{
		if (a % 2 == 0)
		{
			num = str[a];
			_putchar(num);
		}
	}
	_putchar('\n');
}
