#include <stdlib.h>
/**
* alloc_grid - allocates a 2D array of integers
* @width: the width of the array
* @height: the height of the array
*
* Return: pointer to the array or NULL if failure
*/
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;
if (width <= 0 || height <= 0)
return (NULL);
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}
}
return (grid);
}
