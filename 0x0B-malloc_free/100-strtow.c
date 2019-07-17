#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * wstrlen - Calculates position of a word in a str
 * @str: type char str
 * description: function that returns a value position
 * return: wstrlen 0
 */
int wstrlen(char *str)
{
	int pos = 0;
	int len = 0;

	for (pos = 0; (*(str + pos)) && *(str + pos) != ' '; pos++, len++)
		;
	return (len);
}

/**
 * wcounter - Counter of words in s str
 * @str: type char str
 * description: function that returns a value string
 * return: wcounter 0
 */
int wcounter(char *str)
{
	int pos = 0;
	int len = 0;
	int w = 0;

	for (pos = 0; *(str + pos); pos++)
		len++;
	for (pos = 0; pos < len; pos++)
	{
		if (*(str + pos) != ' ')
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
 * description: function
 * Return: If str NULL or str = "" or function fails - NULL.
 */
char **strtow(char *str)
{
	char **strs;
	int pos = 0;
	int letter, w, x, y;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	w = wcounter(str);
	if (w == 0)
		return (NULL);

	strs = malloc(sizeof(char *) * (w + 1));
	if (strs == NULL)
		return (NULL);

	for (x = 0; x < w; x++)
	{
		while (str[pos] == ' ')
			pos++;

		letter = wstrlen(str + pos);

		strs[x] = malloc(sizeof(char) * (letter + 1));

		if (strs[x] == NULL)
		{
			for (; x >= 0; x--)
				free(strs[x]);
			free(strs);
			return (NULL);
		}
		for (y = 0; y < letter; y++)
			(*(*(strs + x) + y)) = str[pos++];
		(*(*(strs + x) + y)) = '\0';
	}
	strs[x] = NULL;

	return (strs);
}
