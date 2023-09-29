#include <stdio.h>
#include "main.h"

/**
* main - Entry point of the program
* @argc: The number of arguments passed
* @argv: An array of pointers to the arguments
*
* Return: Always 0 (Success)
*/
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);

return (0);
}

