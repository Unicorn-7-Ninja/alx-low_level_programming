#include "main.h"
/**
* free_grid - do thing
* @grid: grid
* @height: height
* Return: void
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i++]);
	}
	free(grid);
}
