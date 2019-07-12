#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments received.
 * @argc: type int argument
 * @argv: type char argument of string.
 * Return: if not receive 2 arg, rt error
 */
int main(int argc, char *argv[])
{
	int sum, x;

	(void)argv;
	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			if (atoi(argv[x]) != 0)
				sum = sum + atoi(argv[x]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else if (argc == 1)
	{
		printf("0\n");
	}
	return (0);
}
