#include "holberton.h"
/**
 * print_number - Use to print an integer.
 * @n: type int
 * Description: not allowed arrays, long or pointers.
 */
void print_number(int n)
{
	long pow;
	int bool;
 	long conv;

	conv = n;

	if (conv < 0)
	{
		conv *= -1;
		_putchar('-');
	}

	/* count up */
	pow = 1;
	bool = 1;
	while (c)
	{
		if (conv / (pow * 10) > 0)
			pow *= 10;
		else
			bool = 0;
	}

	/* count down */
	while (conv >= 0)
	{
		if (pow == 1)
		{
			_putchar(conv % 10 + '0');
			conv = -1;
		}
		else
		{
			_putchar((conv / pow % 10) + '0');
			pow /= 10;
		}
	}
}
