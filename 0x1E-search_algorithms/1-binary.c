#include "search_algos.h"

/**
 * binary_search - funct that searches for a value in a sorted array iterative
 * of integers using the Binary search algorithm
 * @array: Type pointer of given array
 * @size: Type size of elements in the array
 * @value: Type value to be searched
 * Return: Value, or -1 if value not present
 */
int binary_search(int *array, size_t size, int value)
{
	int i, left, right;

	if (!array)
		return (-1);
	for (left = 0, right = (int)size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}
