#include "search_algos.h"
#include <math.h>

/**
 * jump_search - funct that searches for a value in a sorted array
 * of int iterating using n jumps
 * @array: Type pointer of given array
 * @size: Type size of elements in the array
 * @value: Type value to be searched
 * Return: Value, or -1 if value not present
 */
int jump_search(int *array, size_t size, int value)
{
	int i, n, jp;

	if (!array || size == 0)
		return (-1);

	jp = n = sqrt(size);
	for (i = jp = 0; jp < (int)size && array[jp] < value;)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[jp]);
		i = jp;
		jp = jp + n;
	}
	printf("Value found between indexes [%d] and [%d]\n", i, jp);

	if (jp < (int)size)
	{
		jp = size;
	}
	else
	{
		jp = size - 1;
	}
	for (; i < jp && array[i] < value; ++i)
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	printf("Value checked array[%d] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : - 1);
}
