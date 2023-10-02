#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - Allocate a 2D grid of integers and initialize it to 0.
* @width: Width of the grid.
* @height: Height of the grid.
*
* Return: Pointer to the newly allocated 2D grid, or NULL on failure.
*/
int **alloc_grid(int width, int height)
{
int **grid;
int x, y;

/* Check for invalid width or height */
if (width <= 0 || height <= 0)
return (NULL);

/* Allocate memory for the grid's rows (height) */
grid = malloc(sizeof(int *) * height);

if (grid == NULL)
return (NULL);

/* Allocate memory for the columns (width) of each row */
for (x = 0; x < height; x++)
{
grid[x] = malloc(sizeof(int) * width);

if (grid[x] == NULL)
{
/* Free previously allocated memory if allocation fails */
for (; x >= 0; x--)
free(grid[x]);
free(grid);
return (NULL);
}
}

/* Initialize all elements of the grid to 0 */
for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
grid[x][y] = 0;
}

return (grid);
}

