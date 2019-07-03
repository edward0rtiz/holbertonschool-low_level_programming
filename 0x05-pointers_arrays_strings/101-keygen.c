#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - generate random valid passwords over 101-crackme
 * Return: 0
 */
int main(void)
{
	int rndm, counter, checksum;

	srand(time(NULL));

	for (counter = 0, checksum = 2772; checksum > 122; counter++)
	{
		rndm = (rand() % 100);
		printf("%c", rndm);
		checksum -= rndm;
	}
	printf("%c", checksum);
	return (0);
}
