#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min <= max)
	{
		arr[i] = min++;
	}
	return (arr);
}
