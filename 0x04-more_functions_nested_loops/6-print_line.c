#include "main.h"

/**
*print_line - Prints a line of underscores.
*@n: Number of times the character '_' should be printed.
*
*Return: void (no return value).
*/
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;

for (i = 1; i <= n; i++)
{
_putchar('_');
}

_putchar('\n');
}
}

