#include <stdio.h>
/**
 * main - Entry point
 * description: print differente combination of two digit-numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, f;

	i = '0';
	while (i <= '9')
	{
		f = '0';
		while (f <= '9')
		{
			if (i < f)
			{
				putchar(i);
				putchar(f);

				if ((f != '9' || i != '8'))
					{
						putchar(',');
						putchar(' ');
					}
			}
			f++;
		}
		i++;
		f = '0';
	}
	putchar('\n');
	return (0);
}
