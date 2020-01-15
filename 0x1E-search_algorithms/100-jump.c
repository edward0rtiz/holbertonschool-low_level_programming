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
	size_t i = 0, n, jp;

	if (!array || size == 0)
		return (-1);

	for (n = sqrt(size); i < size; i += n)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i - n, i);
	for (jp = i - n; jp < size && jp <= i; jp++)
	{
		printf("Value checked array[%lu] = [%d]\n", jp, array[jp]);
		if (array[jp] == value)
			return (jp);
	}
	return (-1);
}
