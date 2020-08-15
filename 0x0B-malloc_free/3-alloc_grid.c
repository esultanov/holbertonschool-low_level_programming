#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * @width: width of array.
 * @height: height of array.
 * Return: pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **arey;
	int i, n, m, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	arey = malloc(height * sizeof(int *));
	if (arey == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arey[i] = malloc(width * sizeof(int));
		if (arey[i] == NULL)
		{
			for (m = i; m >= 0; m--)
				free(arey[m]);
			free(arey);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
		for (n = 0; n < width; n++)
			arey[k][n] = 0;
	return (arey);
}
