#include "main.h"
#include <stdio.h>

/**
*print_array - Prints n elements of an array.
*@a: Pointer to the array.
*@n: The number of elements to be printed.
*/
void print_array(int *a, int n)
{
if (n > 0)
{
for (int i = 0; i < n - 1; i++)
{
printf("%d, ", a[i]);
}

printf("%d\n", a[n - 1]);
}
else
{
printf("\n");
}
}

