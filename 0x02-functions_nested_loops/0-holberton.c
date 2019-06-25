#include "holberton.h"
/**
 * Main: Print Holberton followed by a new line
 * Description: use _putchar.c
 * Return: 0
 */

int main(void)

{
	char holberton[] = "Holberton";
	int c = 0;

	for (c = 0; c <= 9; c++)
	{
		_putchar(holberton[c]);
	}
	_putchar('\n');
	return (0);
}
