#include <stdio.h>

/**
 *main - program that prints all the numbers
 *of base 16 in lowercase, followed by a new line
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char hexDigit;

for (hexDigit = '0'; hexDigit <= 'f'; hexDigit++)
{
	putchar(hexDigit);
}

putchar('\n');

return (0);
}

