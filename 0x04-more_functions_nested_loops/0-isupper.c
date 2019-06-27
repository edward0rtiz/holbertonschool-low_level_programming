#include "holberton.h"
/**
 * int_isupper - check for the upper case characters.
 * @: type int character
 * Return:  1 if it is uppercase and 0 otherwise.
 */

int _isupper(int c)
{

		if (c > 64 && c < 96)
			return (1);

			return (0);
}
