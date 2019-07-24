#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - return result of desired calculation from command line options
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: EXIT_FAILURE if unsuccessful or EXIT_SUCCESS if success.
 */
int main(int argc, char *argv[])
{
	int num1, num2, total;
	int (*op_func)(int, int);
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	ope = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (op[0] == '/' || op[0]) == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	op_func = get_op_func(op);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	total = op_func(num1, num2);
	printf("%d\n", total);
	exit(EXIT_SUCCESS);
}
