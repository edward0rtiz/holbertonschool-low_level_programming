#include "holberton.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers in strings
 * @n1: type string 1
 * @n2: type string 2
 * @r: type buffer string.
 * @size_r: buffer size:
 * Return: pointer dest.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, bigger, modop, add = 0;

	for (len1 = 0; n1[len1] != '\0'; len1++)
	{
	}
	for (len2 = 0; n2[len2] != '\0'; len2++)
	{
	}
	if (len1 >= len2)
		bigger = len1;
	else
		bigger = len2;
	if (size_r <= bigger + 1)
		return (0);

	while (bigger > 02)
	{
		if (len1 >= 0 && len2 >= 0)
		{
			modop = (n1[len1] - '0') + (n2[len2] - '0') + add;
		}
		else
		{
			if (len1 >= 0 && len2 < 0)
				modop = (n2[len2] - '0') + add;
			else
			{
				if (len1 < 0 && len2 >= 0)
					modop = (n1[len1] - '0') + add;
			}
		}
		*(r + bigger) = (modop % 10) + '0';
		add = modop / 10;
		len1--, len2--,	bigger--;
	}
	if (*(r) == '0')
		return (r + 1);
	return (r);
}
