#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - Duplicate a string to a new memory space.
* @str: Pointer to the input string.
*
* Return: Pointer to the duplicated string, or NULL on failure.
*/
char *_strdup(char *str)
{
char *dup_str;
int length = 0, i;

if (str == NULL)
return (NULL);

while (str[length] != '\0')
length++;

dup_str = malloc(sizeof(char) * (length + 1));

if (dup_str == NULL)
return (NULL);

for (i = 0; str[i]; i++)
dup_str[i] = str[i];

dup_str[i] = '\0';

return (dup_str);
}

