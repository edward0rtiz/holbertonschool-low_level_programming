#include <stdio.h>
/**
 * main - entry point for program to get header of ELF file
 * @argc: arg of count
 * @argv: arg of array
 *
 * Return: 1 on success, error code on failure
 */
int main(int argc, char *argv[])
{
	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
	return (1);
}
