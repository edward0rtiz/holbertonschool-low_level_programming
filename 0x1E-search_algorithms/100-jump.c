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
	int i, jp;

	if (!array || size == 0)
		return (-1);
	if (array[0] == value && (int)size > 0)
	{
		printf("Value checked array[%d] = [%d]\n", 0, array[0]);
		printf("Value found between indexes [0] and [0]\n");
		return (0);
	}
	jp = sqrt(size);

	for (i = 0; i < (int)size && array[i] < value; i += jp)
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	if (i - jp < (int)size)
	{
		printf("Value found between indexes [%d] and [%d]\n", i - jp, i);
		for (i -= jp; i < (int)size && array[i] < value; ++i)
			printf("Value checked array [%d] = [%d]\n", i, array[i]);
		if (i < (int)size)
			printf("Value checked array [%d] = [%d]\n", i, array[i]);
	}
	if (array[i] == value)
		return (i);
	return (-1);
}
