#include "main.h"
#include <stdlib.h>
/**
 * free_grid - func name
 * @grid: param 1
 * @height: param 2
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
