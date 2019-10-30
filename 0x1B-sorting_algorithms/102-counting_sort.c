#include "sort.h"

/**
 * counting_sort - Algorithm that sorts the array in order ascended
 *@array: type array of integers.
 *@size: type size of array.
 */

void counting_sort(int *array, size_t size)
{
	int *count, *sort, sum, mx;
	size_t i;

	if (array == NULL || size < 2)
		return;

	sort = malloc(sizeof(int) * size);
	if (sort == NULL)
		return;

	mx = array[0];
	for (i = 1; i < size; i++)
		mx = (array[i] > mx) ? array[i] : mx;
	count = malloc(sizeof(int) * (mx + 1));
	if (count == NULL)
		return;

	for (i = 0; i < (size_t)(mx + 1); i++)
		count[i] = 0;

	for (i = 0; i < size; i++)
		count[array[i]]++;

	for (i = 0, sum = 0; i < (size_t)(mx + 1); i++)
	{
		count[i] += sum;
		sum = count[i];
	}
	print_array(count, mx + 1);

	for (i = 0; i < size; i++)
	{
		sort[count[array[i]] - 1] = array[i];
		count[array[i]]--;
	}
	for (i = 0; i < size; i++)
		array[i] = sort[i];

	free(sort);
	free(count);
}
