#include <stdio.h>
/**
 * main - Entry point
 * description: program that prints two alphabets in
 lower case and upper
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	char d;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar (c);
	}
	for (d = 'A'; d <= 'Z'; d++)
	{
		putchar (d);
	}
	putchar ('\n');
	return (0);
}
