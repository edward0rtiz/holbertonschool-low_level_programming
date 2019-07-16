#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings.
 * @s1: type char str.
 * @s2: type char str
 * Return: Null on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *pstr;
	char *len;
	unsigned int x, y, z;

	len = " ";
	if (s1 == NULL)
		s1 = len;
	if (s2 == NULL)
		s2 = len;

	for (x = 0; s1[x] != '\0'; x++)
		;
	for (y = 0; s2[y] != '\0'; y++)
		;
	y++;
	pstr = malloc((x + y) * sizeof(*pstr) + 1);
	if (pstr == NULL)
		return (NULL);

	for (z = 0; s1[z] != '\0'; z++)
		pstr[z] = s1[z];
	y = 0;
	while (s2[y] != '\0')
	{
		pstr[z] = s2[y];
		y++;
		z++;
	}
	pstr[z] = '\0';
	return (pstr);
}
