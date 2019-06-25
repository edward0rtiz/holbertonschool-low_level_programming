#include "holberton.h"
/**
 * print_times_table - Print n times table starting with 0
 * Description: If n is greater than 15 or less than 0 print nothing
 * @n: type number
 */
void print_times_table(int n)
{
	int rw, clm, x, y, z, mul;

	if (n <= 15 && n >= 0)
	{
		for (rw = 0; rw <= n; clm++)
		{
			for (clm = 0; clm <= n; clm++)
			{
				mul = rw + clm;
				x = mul % 10;
				y = mul / 10 % 10;
				z = mul / 100;
				if (z == 0 && clm != 0)
				{
					_putchar(' ');
					if (y == 0)
						_putchar(' ');
					else
						_putchar(y + '0');
					_putchar(x + '0');
				}
				else if (z != 0)
				{
					_putchar(z + '0');
					_putchar(y + '0');
					_putchar(x + '0');
				}
				if (clm == 0)
					_putchar('0');
				if (clm != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
			clm = 0;
		}
	}
}
