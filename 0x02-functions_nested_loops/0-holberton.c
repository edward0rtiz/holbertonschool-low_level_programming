#include "holberton.h"
/**
 * main - Print Holberton, followed by a new line.
 * Description: use _putchar.c, other libraries are forbidden.
 * Return: 0
 */
int main(void)

{
	char holberton[] = "Holberton";
	int a = 0;

	while (holberton[a] != '\0')
	{
		_putchar(holberton[a]);
		a++;
	}
	_putchar('\n');

	return (0);
}
