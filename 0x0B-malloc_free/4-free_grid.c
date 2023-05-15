#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: 2 dimensional grid
 * @height: height dimensional grid
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
int l;

for (l = 0; l < height; l++)
{
free(grid[l]);
}
free(grid);
}
