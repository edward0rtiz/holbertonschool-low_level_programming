#include "sort.h"
/**
 * swap_bubble - function to swap/sort.
 *@a: variable to swap.
 *@b: variable to swap.
 * Return: void.
 */
void swap_bubble(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - sorting array via selection sort method.
 *@array: array to be sorted.
 *@size: size of array.
 * Return: Always 0
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int *min_idx;

	for (i = 0;  i < size - 1; i++)
	{
		min_idx = array + i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < *min_idx)
				min_idx = (array + j);
		}
		if ((array + i) != min_idx)
		{
			swap_bubble(array + i, min_idx);
			print_array(array, size);
		}
	}
}
