#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return pointer to 2d int array
 * @width: int array width
 * @height: int array height
 * Return: a pointer to 2d array or Null on failure
 * Null if width or height is 0
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i;
	int j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
