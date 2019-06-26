#include <stdio.h>

/**
 * main - function used for fibonacci
 * description: number not exceed 4000000
 * return: 0
 */
int main(void)
{
	int fb1 = 0;
	int fb2 = 1;
	int fb3 = 2;
	int sum;

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
