#include "sort.h"

/**
 * get_max - To get the max of the array
 *@array: array to be sorted
 *@size: size to be sorted
 *
 * Return: int
 */
int get_max(int *array, int size)
{
	int mx, i;

	for (mx = array[0], i = 1; i < size; i++)
	{
		if (array[i] > mx)
		{
			mx = array[i];
		}
	}
	return (mx);
}

/**
 * lsd_sort - sorting algo
 *@array: array to be sorted
 *@size: size of array to be sorted
 *@exp: exp
 *@copy: copy
 * Return: void
 */
void lsd_sort(int *array, size_t size, int exp, int *copy)
{
	size_t i;
	int bucket[10] = {0};

	for (i = 0; i < size; i++)
	{
		bucket[(array[i] / exp) % 10]++;
	}

	for (i = 1; i < 10; i++)
	{
		bucket[i] = bucket[i] + bucket[i - 1];
	}

	for (i = size - 1; (int)i >= 0; i--)
	{
		copy[bucket[(array[i] / exp) % 10] - 1] = array[i];
		bucket[(array[i] / exp) % 10]--;
	}

	for (i = 0; i < size; i++)
	{
		array[i] = copy[i];
	}
}
/**
 * radix_sort - radix sorting algo function
 *@array: array to be sorted
 *@size: size of array to be sorted
 * Return: void
 */
void radix_sort(int *array, size_t size)
{
	int mx, exp, *copy;

	if (array == NULL || size < 2)
		return;
	copy = malloc(sizeof(int) * size);
	if (copy == NULL)
		return;

	mx = get_max(array, size);
	for (exp = 1; mx / exp > 0; exp *= 10)
	{
		lsd_sort(array, size, exp, copy);
		print_array(array, size);
	}
	free(copy);
}
