#include "holberton.h"

/**
 * print_square - Print  square followed by a line.
 *@size: type int
 * Return: Always 0.
 */
void print_square(int size)
{
	int hashtag, clm;

	hashtag = 0;

	if (size < 1)
		_putchar('\n');

	while (clm < size)
	{
		hashtag = 0;
		while (hashtag < size)
		{
			_putchar('#');
			hashtag++;
		}
		_putchar('\n');
		clm++;
	}
}
