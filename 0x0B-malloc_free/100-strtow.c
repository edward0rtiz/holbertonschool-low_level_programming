#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * wstrlen - Calculates position of a word in a str
 * @str: type char str
 * return: wstrlen
 */
int wstrlen(char *str)
{
	int pos = 0;
	int len = 0;

	for (pos = 0; str[pos] && str[len] != '\0'; pos++, len++)
		return (len);
}

/**
 * wcounter - Counter of words in s str
 * @str: type char str
 * return: wcounter
 */
int wcounter(char *str)
{
	int pos = 0;
	int len = 0;
	int w = 0;

	for (pos = 0; str[pos]; pos++)
		len++;
	for (pos = 0; pos < len; pos++)
	{
		if (str[pos] != '\0')
		{
			w++;
			pos = pos + wstrlen(str + pos);
		}
	}
	return (w);
}
