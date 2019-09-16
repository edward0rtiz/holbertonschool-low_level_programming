#include "holberton.h"
#include <stdio.h>
/**
 * _abs - Compute the absolute value of an integer
 * @n: Type int n
 * Return: 0
 */

int _abs(int n)

{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
