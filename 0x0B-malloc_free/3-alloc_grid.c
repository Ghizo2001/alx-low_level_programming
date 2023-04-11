#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 *
 * Return: pointer to a 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **mygrid = NULL;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	mygrid = malloc(height * sizeof(int *));
	if (mygrid == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < height)
	{
		mygrid[i] = calloc(width, sizeof(int));
		if (mygrid[i] == NULL)
		{
			j = 0;
			while (j < i)
			{
				free(mygrid[j]);
				j++;
			}
			free(mygrid);
			return (NULL);
		}
		i++;
	}
	return (mygrid);
}
