#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* free_grid - Frees the memory allocated for a 2D array (grid).
* @grid: Pointer to the 2D array to be freed.
* @height: Height dimension of the grid.
*
* Description: Frees the memory of a 2D array created by alloc_grid.
*/
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}

free(grid);
}

