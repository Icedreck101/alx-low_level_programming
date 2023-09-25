#include "main.h"

/**
* _strstr - Locates a substring in a string.
* @haystack: Pointer to the string to search in.
* @needle: Pointer to the substring to search for.
*
* Return: Pointer to the first occurrence of the substring 'needle' in
*         the string 'haystack', or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *l = haystack;
char *p = needle;

while (*l == *p && *p != '\0')
{
l++;
p++;
}

if (*p == '\0')
return (haystack);

haystack++;
}

return (NULL);
}

