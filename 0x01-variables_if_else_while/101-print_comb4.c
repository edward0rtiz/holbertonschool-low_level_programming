#include <stdio.h>
/**
 * main - Entry point
 * description: print differente combination of two digit-numbers
 * Return: Always 0 (in process)
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
			putchar(i);
			putchar(f);
			if ((i == '9') && (f == '9'))
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			f++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
