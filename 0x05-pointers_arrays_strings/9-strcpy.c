#include "main.h"

/**
*_strcpy - Copy a string pointed to by src to dest
*@dest: Pointer to the destination string
*@src: Pointer to the source string
*
*Return: Pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int l = 0;
int x = 0;

/* Calculate the length of the source string */
while (*(src + l) != '\0')
{
l++;
}

/* Copy characters from src to dest */
for (; x < l; x++)
{
dest[x] = src[x];
}

/* Null-terminate the destination string */
dest[l] = '\0';

return (dest);
}

