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

	if (n == 0)
		return (0);


	va_start(arg, n);

	sum = x = 0;
	while (x < n)
	{
		sum += va_arg(arg, int);
		x++;
	}

	va_end(arg);
	return (sum);
}
