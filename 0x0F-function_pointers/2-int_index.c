#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - Function that search for an integer
 * @array: Type int array pointer
 * @size: Type pointer size of the array
 * @cmp: Type pointer to the function compare values
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL || size < 1)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(*(array + x)))
			return (x);
	}
	return (-1);
}
