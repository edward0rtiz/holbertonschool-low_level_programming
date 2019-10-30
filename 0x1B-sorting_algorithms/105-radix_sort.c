#include "sort.h"

/**
 * get_max -  function.
 *@array: array.
 *@size: size.
 * Return: mx
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
 * lsd_sort - sorting algorithm function.
 *@array: array.
 *@size: size.
 *@exp: exp.
 *@copy: copy.
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
 * radix_sort - orting algorithm function.
 *@array: array.
 *@size: size
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
