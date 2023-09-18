#include "main.h"

/**
*puts2 - Prints every other character of a string, starting with the first character.
*@str: The input string.
*/
void puts2(char *str)
{
int length = 0;

while (str[length] != '\0')
{
length++;
}

for (int i = 0; i < length; i += 2)
{
_putchar(str[i]);
}

_putchar('\n');
}

