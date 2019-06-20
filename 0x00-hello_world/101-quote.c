#include <stdio.h>
#include <unistd.h>
/**
 *main - Prints a string to standard error
 *
 *Description: Prints the string specified to the stderr pointer without using
 *the function fprintf, puts, printf, or any of its derivatives
 *Return: Returns the value 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
