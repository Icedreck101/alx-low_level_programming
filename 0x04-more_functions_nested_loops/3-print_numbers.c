#include "main.h"

/**
*print_numbers - Prints the digits from 0 to 9.
*
*Return: void (no return value).
*/
void print_numbers(void)
{
char c;

for (c = '0'; c <= '9'; c++)
{
_putchar(c);
}

_putchar('\n');
}

