#include "holberton.h"
#include <stdio.h>

/**
 * *_strcat - Function that concatenates two strings.
 * @dest: type char
 * @src: type char
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}

	dest[a] = '\0';
	return (dest);
}
