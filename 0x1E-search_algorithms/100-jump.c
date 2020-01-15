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
	size_t i, n, jp;

	if (array == NULL || size == 0)
		return (-1);

	n = sqrt(size);
	for (i = jp = 0; jp < size && array[jp] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[jp]);
		i = jp;
		jp = jp + n;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, jp);

	if (jp < size)
	{
		jp = size;
	}
	else
	{
		jp = size - 1;
	}
	for (; i < jp && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	if (array[i] == value)
	{
		return (i);
	}
	else
	{
		return (-1);
	}
}
