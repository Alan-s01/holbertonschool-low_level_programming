#include "holberton.h"
/**
 * alloc_grid - returns a pointer to 2d
 * @width: width
 * @height: height
 * Return: NULL or pointer
 */
int **alloc_grid(int width, int height)
{
	int i, i1;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = (int **)malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = (int *)malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (i1 = 0; i1 < i; i1++)
				free(a[i1]);
			free(a);
			return (NULL);
		}
		for (i1 = 0; i1 < width; i1++)
			a[i][i1] = 0;
	}
	return (a);
}
