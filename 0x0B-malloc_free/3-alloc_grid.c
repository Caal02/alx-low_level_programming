#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a2 dimentinall array of integers
 * @width: int value
 * @height: int vlaue
 * Return: Null on faliure
 */
int **alloc_grid(int width, int height)
{
	if (width != 0 && height != 0)
	{
		return (width);
	}
	else
	{
		return (NULL);
	}
}
