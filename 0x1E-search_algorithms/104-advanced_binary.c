#include "search_algos.h"

/**
 * binary_rec - function that searches for a value in a sorted array
 * of integers using recursion
 * @array: Type pointer of given array
 * @left: Type size_t element located at right side of the array
 * @right: Type size_t element located at right side of the array
 * @value: Type value to be searched
 * Return: Value, or -1 if value not present
 */

int binary_rec(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);
	printf("Searching in array: ");

	i = left;
	while (i < right)
	{
		printf("%d,", array[i]);
		++i;
	}
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value)
		return (i);
	if (array[i] > value)
		return (binary_rec(array, left, i - 1, value));
	return (binary_rec(array, i + 1, right, value));
}
/**
 * binary_search - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: Type pointer of given array
 * @size: Type size of elements in the array
 * @value: Type value to be searched
 * Return: Value, or -1 if value not present
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_rec(array, 0, size - 1, value));
}
