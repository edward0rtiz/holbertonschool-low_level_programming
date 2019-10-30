#include "sort.h"

/**
 * swap_bubble - function to swap/sort.
 *@a: pointer to be swapped.
 *@b: pointer to be swapped.
 * Return: Always 0
 */
void swap_bubble(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * quick_sort_hoare - sorts an array of integers with Hoare algorithm.
 *@array: array to be sorted.
 *@size: size of array.
 * Return: void.
 */
void quick_sort_hoare(int *array, size_t size)
{

	partition_sort_hoare(array, size, 0, size - 1);
}

/**
 * partition_sort_hoare - function of partitios in Hoare algorithm.
 *@array: given array to be sorted.
 *@size: size of array to be sorted.
 *@low: partition.
 *@high: partition.
 * Return: void.
 */
void partition_sort_hoare(int *array, size_t size, int low, int high)
{
	int part;

	if (high - low > 0)
	{
		part = partition_hoare(array, size, low, high);
		partition_sort_hoare(array, size, low, part - 1);
		partition_sort_hoare(array, size, part, high);
	}
}

/**
 * partition_hoare - function with pivot for partition.
 *@array: array to be sorted with Hoare algorithm.
 *@size: size of array to be sorted.
 *@low: low partition.
 *@high: high partition.
 * Return: Always 0
 */
int partition_hoare(int *array, size_t size, int low, int high)
{
	int pivot, high1, low1;

	pivot = array[high];
	for (high1 = low - 1, low1 = high + 1; high1 < low1;)
	{
		do {
			high1++;
		} while (array[high1] < pivot);
		do {
			low1--;
		} while (array[low1] > pivot);

		if (high1 < low1)
		{
			swap_bubble(array + high1, array + low1);
			print_array(array, size);
		}
	}
	return (high1);
}
