#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _printc - Funtion that prints a char
 * @valist: type va_list
 * @s: type char
 */
void _printc(va_list valist, char *s)
{
	printf("%s%c", s, va_arg(valist, int));
}
/**
 * _printi - Funtion that prints an int
 * @valist: type va_list
 * @s: type char
 */
void _printi(va_list valist, char *s)
{
	printf("%s%d", s, va_arg(valist, int));
}
/**
 * _printF - Funtion that prints an int
 * @valist: type va_list
 * @s: type char
 */
void _printF(va_list valist, char *s)
{
	printf("%s%f", s, va_arg(valist, double));
}
/**
 * _printstr - Funtion that prints a string
 * @valist: type va_list
 * @s: type char
 */
void _printstr(va_list valist, char *s)
{
	char *sa;

	sa = va_arg(valist, char *);
	if (sa == NULL)
		sa = "(nil)";
	printf("%s%s", s, sa);
}
/**
 * print_all - Function that prints CIFS
 * @format: Type list of arg CIFS
 *
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	char *s;
	int x, y;

	print p[] = {
		{"c", _printc},
		{"i", _printi},
		{"f", _printF},
		{"s", _printstr},
	};

	va_start(valist, format);

	y = 0;
	s = "";
	while (format != NULL && format[y] != '\0')
	{
		x = 0;
		while (x < 4 && format[y] != p[x].c[0])
			x++;
		if (x < 4)
		{
			p[x].f(valist, s);
			s = ", ";
		}
		y++;
	}
	printf("\n");
	va_end(valist);

}
