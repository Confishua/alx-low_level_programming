#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - entry point
* @grid: identify the content
* @height: to be free'd 
*/

void free_grid(int **grid, int height)
{
int j;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
