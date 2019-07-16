#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

int wstrlen(char *str);
int wcounter(char *str);

/**
 * wstrlen - Calculates position of a word in a str
 * @str: type char str
 * desciption: function that returns a value position
 * return: wstrlen 0
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
 * desciption: function that returns a value string
 * return: wcounter 0
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
/**
 * strtow - Function that splits a string into words.
 * @str: Type char str
 * Return: If str NULL or str = "" or function fails - NULL.
 */
char **strtow(char *str)
