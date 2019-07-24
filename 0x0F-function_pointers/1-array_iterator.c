#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - Exucute function given as a par on each elm of array
 * @array: Type int array pointer
 * @size: Type pointer size of the array
 * @action: Type pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array == NULL || action == NULL || size == 0)
		exit(EXIT_FAILURE);
	for (x = 0; x < size; x++)

		action(array[x]);
}
