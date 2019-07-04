#include "holberton.h"
#include <stdio.h>

/**
 * *_strncat - Function that concatenates two strings.
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)

{
	int a, b;

	for (a = 0; dest[a] !='\0'; a++)
	{
	}
	for (b = 0; src[b] !='\0' && n > 0; b++, n--)
	{
		dest[a] = src[b];
		a++;
	}
	return (dest);
}
