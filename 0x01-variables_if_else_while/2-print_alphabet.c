#include <stdio.h>

/**
 *main - a program that prints the alphabet
 *in lowercase, followed by a new line.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
int i;

for (i = 0; i < 26; i++)
{
	putchar(alphabet[i]);
}

putchar('\n');

return (0);
}

