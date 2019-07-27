#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - func that returns the sum of all parameters.
 *
 * @n: type unsigned int
 * return: sum
 */

int sum_them_all(const unsigned int n, ...)

{
	va_list arg;
	int sum;
	unsigned int x;

	sum = 0;
	if (n == 0)
		return (0);

	va_start(arg, n);

	for (x = 0; x < n; x++)
		sum += va_arg(arg, int);

	va_end(arg);
	return (sum);
}
