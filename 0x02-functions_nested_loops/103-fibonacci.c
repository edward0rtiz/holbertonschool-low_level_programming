#include <stdio.h>
#include "holberton.h"
/**
 * main - function used for fibonacci
 *
 *
 * description: nuber not exceed 4000000
 * return: return success
 */

int main(void)
{
	long int fb1 = 0;
	long int fb2 = 1;
	long int fb3 = 2;
	long int sum;

	while (fb3 < 4000000)
	{
		if (fb3 % 2 == 0)
		{
			fb1 += fb3;
		}

		sum = fb3;
		fb3 += fb2;
		fb2 = sum;
	}
	printf("%ld\n", fb1);
	return (0);
}
