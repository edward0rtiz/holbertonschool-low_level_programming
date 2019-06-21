#include <stdio.h>
/**
 * main - Entry point
 * description: print lowercase alphabet in reverse
 * no char and no printf
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar (c);
		putchar ('\n');

	return (0);
}
