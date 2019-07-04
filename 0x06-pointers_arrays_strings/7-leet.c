#include "holberton.h"

/**
 * leet - Encode a string into 1337
 * @a: string
 * Return: string
 */

char *leet(char *s)

{
	int letter;

	for (letter = 0; s[letter] != '\0'; letter++)
	{
		while (s[letter] == 'a' || s[letter] == 'A')
			s[letter] = '4';
		while (s[letter] == 'e' || s[letter] == 'E')
			s[letter] = '3';
		while (s[letter] == 'o' || s[letter] == 'O')
			s[letter] = '0';
		while (s[letter] == 't' || s[letter] == 'T')
			s[letter] = '7';
		while (s[letter] == 'l' || s[letter] == 'L')
			s[letter] = '1';
	}
	return (s);
}
