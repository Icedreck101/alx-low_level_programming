#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of characters and initializes it with 'c'
* @size: size of the array
* @c: character to initialize the array elements with
*
* Return: pointer to the newly created array, NULL on failure
*/
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;

if (size == 0)
return (NULL);

str = malloc(sizeof(char) * size);
if (str == NULL)
return (NULL);

for (i = 0; i < size; i++)
str[i] = c;

return (str);
}

