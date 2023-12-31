#include "main.h"

/**
*_isdigit - Checks if a character is a digit (0-9).
*@c: The character to check.
*
*Return: 1 if c is a digit, 0 otherwise.
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1); /* Return 1 if the character is a digit. */
else
return (0); /* Return 0 if it's not a digit. */
}

