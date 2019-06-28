#include "holberton.h"
/**
 * print_number - Use to print an integer.
 * @n: type int
 * Description: not allowed arrays, long or pointers.
 */
void print_number(int n)
{
	int counter;
 	int num;
	int bool;

	counter = 1;
	num = n;
	bool = 1;

	if (num < 0)
	{
	num *= -1;
	_putchar('-');
	}

	while (bool)
	{
		if (num / (counter * 10) > 0)
			counter *= 10;
		else
		bool = 0;
	}

	while (num >= 0)
	{
		if (counter == 1)
		{
			_putchar(num % 10 + '0');
			num = -1;
		}
		else
		{
			_putchar((num / counter % 10) + '0');
			counter /= 10;
		}
	}
}
