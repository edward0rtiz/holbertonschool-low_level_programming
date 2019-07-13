#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - prints all arguments received.
 * @argc: type int argument
 * @argv: type char argument of string.
 * Return: if not receive 2 arg, rt error
 */
int main(int argc, char *argv[])
{
	int x, y;
	int sum = 0;

	(void)argv;
	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			for (y = 0; argv[x][y] != '\0'; y++)
			{
				if (!(isdigit(argv[x][y])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[x]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
