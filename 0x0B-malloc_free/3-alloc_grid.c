#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - make an array 2d
* @width: width of array
* @height: height of array
* Return: fun or NULL
*/

int **alloc_grid(int width, int height)
{
	int **fun;

	if (width <= 0 || height <= 0)
		return (NULL);

	fun = (int **) malloc(sizeof(int *) * height);

	for (int i = 0; i < height; i++)
	{
		fun[i] = (int *) malloc(sizeof(int) * width);
		if (fun[i] == NULL)
		{
			free(fun);
			for (int o = 0; o <= i; o++)
				free(fun[o]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (o = 0; o < width; o++)
		{
			fun[i][o] = 0;
		}
	}

	return (fun);
}
