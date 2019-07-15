#include <stdio.h>
/**
 * main - print 98 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	long int fib1, fib1a, fib1b, fib2, fib2a, fib2b, fib3, fib3a, fib3b;
	long int div = 10000000000;

	fib1 = 0;
	fib2 = 1;
	int counter = 1;

	for (counter = 0; counter < 91; counter++)
	{
		fib3 =  fib2 + fib1;
		fib1 = fib2;
		fib2 = fib3;
		printf("%ld, ", fib3);
	}
	fib1a = fib1 / div;
	fib1b = fib1 % div;
	fib2a = fib2 / div;
	fib2b = fib2 % div;
	for (; counter < 98; counter++)
	{
		fib3a = fib1a + fib2a;
		fib3b = fib1b + fib2b;
		if (fib3b > div)
		{
			fib3b = fib3b % div;
			fib3a++;
		}
		if (counter != 97)
		{
			printf("%ld%ld, ", fib3a, fib3b);
			fib1a = fib2a;
			fib1b = fib2b;
			fib2a = fib3a;
			fib2b = fib3b;
		}
		else
			printf("%ld%ld\n", fib3a, fib3b);
	}
	return (0);
}
