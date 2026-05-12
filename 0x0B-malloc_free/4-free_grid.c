#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
 */

 void free_grid(int **grid, int height)
 {
    int i = 0;

    if(grid == NULL)
        return;

    while(i < height)
    {
        free(grid[i]);
        i++;
    }

    free(grid);
 }