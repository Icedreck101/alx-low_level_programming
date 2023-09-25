#include "main.h"

/**
* _memset - Fill a block of memory with a specific value.
* @s: Pointer to the memory to be filled.
* @b: The value to fill the memory with.
* @n: Number of bytes to be filled.
*
* Return: Pointer to the filled memory.
*/
char *_memset(char *s, char b, unsigned int n)
{
int i;

for (i = 0; n > 0; i++)
{
s[i] = b;
n--;
}

return (s);
}

