#include "main.h"

/**
*print_rev - Prints a string in reverse.
*@s: The string to print in reverse.
*/
void print_rev(char *s)
{
int length = 0;
int o;

while (*s != '\0')
{
length++;
s++;
}

s--;

for (o = length; o > 0; o--)
{
_putchar(*s--);
}

_putchar('\n');
}

