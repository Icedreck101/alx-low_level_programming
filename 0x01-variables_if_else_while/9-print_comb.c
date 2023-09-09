#include <stdio.h>

/**
 *main - program that prints all possible
 *combinations of single-digit numbers.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char digit;

for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);
	if (digit != '9')
	{
		putchar(',');
		putchar(' ');
	}
}

putchar('\n');

return (0);
}

