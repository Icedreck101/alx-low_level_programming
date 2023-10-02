#include "main.h"
#include <stdlib.h>

/**
* argstostr - Concatenate an array of strings into a single string.
* @ac: Number of strings in the array.
* @av: Array of strings.
*
* Return: Pointer to the newly allocated
* concatenated string, or NULL on failure.
*/
char *argstostr(int ac, char **av)
{
int i, j, total_length = 0, k = 0;
char *str;

/* Check for valid input */
if (ac == 0 || av == NULL)
return (NULL);

/* Calculate the total length of the concatenated string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
total_length++;
total_length++; /* Account for the newline character */
}

/* Allocate memory for the concatenated string */
str = malloc(sizeof(char) * (total_length + 1));

if (str == NULL)
return (NULL);

/* Copy the strings into the concatenated string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n'; /* Add a newline character */
k++;
}

str[k] = '\0'; /* Null-terminate the concatenated string */

return (str);
}

