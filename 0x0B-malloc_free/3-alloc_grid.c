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
	int i, n;

	if (width <= 0 || height <= 0)
		return (NULL);
	arey = malloc(width * sizeof(int *));
	for (i = 0; i < width; i++)
		arey[i] = malloc(height * sizeof(int));
	if (arey)
	{
		for (i = 0; i < width; i++)
		{
			for (n = 0; n < height; n++)
				arey[i][n] = 0;
		}
	}
	else
		return (NULL);
	return (arey);
}
