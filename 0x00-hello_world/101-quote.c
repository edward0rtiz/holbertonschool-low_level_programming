#include <stdio.h>
#include <unistd.h>
/**
 *main - print line
 *Return: 1
 */
int main(void)
{
int E;
E = sizeof("and that piece of art is useful - Dora Korpar, 2015-10-19");
write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", E);
return (1);
}
