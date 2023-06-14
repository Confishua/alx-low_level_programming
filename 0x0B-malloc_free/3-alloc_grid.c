#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - entry point
* @width: get width for matrics
* @height: get the height of the matrics
* Return: return the result
*/

int **alloc_grid(int width, int height)
{
int **array;
int i, j;
if (width < 1 || height < 1)
return (NULL);
array = (int **)malloc(sizeof(int *) * height);
if (array == NULL)
{
free(array);
return (NULL);
}
for (i = 0; i < height; i++)
{
array[i] = malloc(sizeof(int) * width);
if (array[i] == NULL)
{
for (i = 0; i < height; i++)
{
free(array[i]);
}
free(array);
return (NULL);
}
}
for (i = 0; i < height; i++)
for (j = 0; j < width; j++)
{
array[i][j] = 0;
}
return (array);
}
