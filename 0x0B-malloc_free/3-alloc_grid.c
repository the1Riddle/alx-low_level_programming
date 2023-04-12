#include "main.h"
/**
 * alloc_grid - the entry point
 * @width: width input
 * @height: height input
 *
 * Description: a function that returns a pointer to a
 * 2 dimensional array of integers.
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **mnt;
	int x, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	mnt = malloc(sizeof(int *) * height);

	if (mnt == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		mnt[x] = malloc(sizeof(int) * width);

		if (mnt[x] == NULL)
		{
			while (x >= 0)
			{
				free(mnt[x]);
				x--;
			}
			free(mnt);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			mnt[x][y] = 0;
		}
	}
	return (mnt);
}
