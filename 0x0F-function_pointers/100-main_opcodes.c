#include <stdlib.h>
#include <stdio.h>
/**
 * main - print the opcode of it own function
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: Exit 1 if one arg is not correct, 2 if byte is negative.
 */
int main(int argc, char *argv[])
{
	short bytes, x;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	if (bytes == 0)
	{
		putchar('\n');
		exit(EXIT_SUCCESS);
	}
	printf("%02x", *((unsigned char *) (main)));
	for (x = 0; x < bytes; x++)
		printf(" %02x", *((unsigned char *) (main + x)));
	putchar('\n');
	exit(EXIT_SUCCESS);
}
