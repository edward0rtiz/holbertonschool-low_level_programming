#include "holberton.h"
/**
 * _isalpha - Checks for alphabetic character
 * @c: Type char c
 * Return: 0
 */

int _isalpha(int c)

{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
		return (1);
	else
		return (0);
}
