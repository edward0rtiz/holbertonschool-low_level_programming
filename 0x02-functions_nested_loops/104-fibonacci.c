#include <stdio.h>
/**
 * main - print 98 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	long int n, f1, f2, fb1a, fb1b, fb2a, fb2b, fbsa, fbsb, fbx;
/**    dissections */
	f1 = 1;
	f2 = 2;
	fb1a = f1 % 1000000000;
	fb1b = f1 / 1000000000;
	fb2a = f2 % 1000000000;
	fb2b = f2 / 1000000000;
	printf("%ld, %ld, ", f1, f2);

	for (n = 3; n <= 98; n++)
	{
		fbx = (fb1a + fb2a) / 1000000000;
		fbsa = (fb1a + fb2a) % 1000000000;
		fbsb = fbx + fb2b + fb1b;
		fb1a = fb2a;
		fb1b = fb2b;
		fb1a = fbsa;
		fb1b = fbsb;
		if (n > 55)
		{
			if (n < 98)
			{
				printf("%ld%09ld, ", fbsb, fbsa);
			}
			else
			{
				printf("%ld%09ld\n", fbsb, fbsa);
			}
		}
		else
		{
			if (fbsa == 0)
			{
				printf("%ld, ", fbsb);
			}
			else
			{
				printf("%ld%ld, ", fbsa, fbsb);
			}
		}
	}
	return (0);
}
