#include "main.h"

/**
*_isupper - Checks if a character is an uppercase letter.
*@c: The character to check.
*
*Return: 1 if c is an uppercase letter, 0 otherwise.
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1); /* Return 1 if the character is an uppercase letter. */
else
return (0); /* Return 0 if it's not an uppercase letter. */
}

