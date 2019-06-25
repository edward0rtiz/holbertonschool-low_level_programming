#include "holberton.h"
/**
 * print_times_table - Print n times table starting with 0
 * Description: If n is greater than 15 or less than 0 print nothing
 * @n: type number
 */
void print_times_table(int n)
{
	int num1 = 0, num2, num3;

	if (n > 15 || n < 0)
		return;
	while (num1 <= n)
	{
		for (num2 = 0; num2 <= n; num2++)
		{
			num3 = num1 * num2;
			if (num3 > 99)
			{
				_putchar(num3 / 100 + '0');
				_putchar((num3 / 10 % 10) + '0');
				_putchar(num3 % 10 + '0');
			}
			else if (num3 > 9)
			{
				_putchar(' ');
				_putchar(num3 / 10 + '0');
				_putchar(num3 % 10 + '0');
			}
			else if (num2 != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(num3 + '0');
			}
			else
				_putchar(num3 + '0');
			if (num2 != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		num1++;
	}
}
