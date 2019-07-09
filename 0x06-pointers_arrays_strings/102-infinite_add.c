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
	int len1, len2, strg, d2, d3, s3;

	d3 = s3 = 0;
/* defining length of n1 n2 with bigger */
	for (len1 = 0; n1[len1] != '\0'; len1++)
		;
	for (len2 = 0; n2[len2] != '\0'; len2++)
		;
/* equal the longitude of len to buffer bigger */
	if (len1 >= len2)
		strg = c1;
	if (size_r <= strg)
		return (0);
	r [bg + 1]
	len1 = len1 - 1;
	len2 = len2 - 1;
/* defining the longitude in 2 digits to store it in buffer */
	while (len1 >= 0 || len2 >= 0)
	{
		d1 = d2 = 0;
		if (len1 >= 0)
			d1 = n1[len1--] - '0';
		if (len2 >= 0)
		d2 = n2[len2--] - '0';
/* sum of d1 and d2 and the carry s3 */
		d3 = d1 + d2 + s3;
/* new condition */
		if (d3 > 9)
		{
			s3 = 1;
			s3 = s3 - 10;
		}
		else
			s3 = 0;
r[]
	}
		return (0);
}
