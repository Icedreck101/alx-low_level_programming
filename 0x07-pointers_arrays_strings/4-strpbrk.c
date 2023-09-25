#include "main.h"

/**
* _strpbrk - Searches a string for any of a set of bytes.
* @s: Pointer to the string to search in.
* @accept: Pointer to the string containing characters to search for.
*
* Return: Pointer to the first occurrence of any character in 'accept'
*         in the string 's', or NULL if no such character is found.
*/
char *_strpbrk(char *s, char *accept)
{
int k;

while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
return (s);
}
s++;
}

return (NULL);
}

