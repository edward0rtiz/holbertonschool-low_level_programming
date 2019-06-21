#include <stdio.h>
/**
 * main - Entry point
 * description: print combinations of single digit-numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
	if (i != '9')
	{
		putchar(',');
		putchar(' ');
	}
		i++;
	}
	putchar('\n');
	return (0);
}
