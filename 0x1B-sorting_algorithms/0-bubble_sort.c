#include "sort.h"

/**
 * swap_bubble - function for sorting with swap method.
 *@a: element to be swapped.
 *@b: element to be swapped.
 * Return: nothing.
 */

void swap_bubble(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - sorts an array using bubble sort algorithm.
 *@array: array to be sorted.
 *@size: size to be sorted.
 * Return: void.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, sz = size;
	bool booln = false;

	if (array == NULL || size < 2)
		return;

	while (booln == false)
	{
		booln = true;
		for (i = 0; i < sz - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_bubble(array + i, array + i + 1);
				print_array(array, size);
				booln = false;
			}
		}
		sz--;
	}
}
