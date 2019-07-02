#include "holberton.h"
#include <stdio.h>
/**
 * _atoi - convert string into integer.
 * @s: Type char pointer
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int num, a, neg;

	neg = 1;
	a = num = 0;

	while (((s[a] < '0') || s[a] > '9') && s[a] != 0)
	{
		if (s[a] == '-')
			neg = neg * -1;
		a++;
	}
	while (((s[a] >= '0') && s[a] <= '9') && s[a] != 0)
	{
		if (num >= 0)
		{
			num = num * 10 - (s[a] - '0');
			a++;
		}
		else
		{
			num = num * 10 - (s[a] - '0');
			a++;
		}
	}
	neg = neg * -1;
	return (num * neg);
}
