#include "holberton.h"
/**
 * print_most_numbers - Print numbers from 0 to 9.
 *
 * Return: _putchar two times max
 */
void print_most_numbers(void)
{
	int num;

	num = 0;

	for (num = 0; num <=9; num++)
	{
		if (num != 2 && num != 4)
			_putchar(num + '0');


	}
	_putchar('\n');
}
