#include "sort.h"

void swap_bubble(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void shell_sort(int *array, size_t size)
{
	size_t gap;
	size_t i, j;

	for(gap = 1; gap < (size / 3);)
		gap *= 4;
	for (; gap >= 1; gap = gap / 3)
	{
		for (i = gap; i < size; i++)
		{
			for(j = i; j >= gap && array [j - gap] > array[j]; j -= gap)
				swap_bubble(array + j, array + (j - gap));
		}
		print_array(array, size);
	}
}
