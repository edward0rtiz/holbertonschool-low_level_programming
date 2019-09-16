#include "holberton.h"
/**
 * _isupper - check for the upper case characters.
 * @c: type int character
 * Return:  1 if it is uppercase and 0 otherwise.
 */

int _isupper(int c)
{

		if (c > 64 && c < 91)
			return (1);

			return (0);
}
