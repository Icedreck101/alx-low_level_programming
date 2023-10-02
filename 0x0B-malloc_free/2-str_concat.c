#include "main.h"
#include <stdlib.h>

/**
* str_concat - Concatenate two strings.
* @s1: The first string to concatenate.
* @s2: The second string to concatenate.
*
* Return: A pointer to the newly allocated
* concatenated string, or NULL on failure.
*/
char *str_concat(char *s1, char *s2)
{
char *concatenated;
int len1 = 0, len2 = 0, i = 0, j = 0;

/* Check for NULL strings and replace with empty strings */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

/* Calculate the lengths of s1 and s2 */
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;

/* Allocate memory for the concatenated string */
concatenated = malloc(sizeof(char) * (len1 + len2 + 1));

if (concatenated == NULL)
return (NULL);

/* Copy the characters from s1 to concatenated */
while (s1[i] != '\0')
{
concatenated[i] = s1[i];
i++;
}

/* Copy the characters from s2 to concatenated */
while (s2[j] != '\0')
{
concatenated[i] = s2[j];
i++;
j++;
}

concatenated[i] = '\0';

return (concatenated);
}

