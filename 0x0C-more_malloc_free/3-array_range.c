#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array if integers
 * @min: the minmum value
 * @max: the maximum value
 * Return: the pointer to the new array
*/

int *array_range(int min, int max)
{
	int i = 0;
	int *ch;

	if (min > max)
	{
		return (NULL);
	}

	ch = malloc(sizeof(int) * (max - min + 1));

	if (ch == NULL)
	{
		return (NULL);
	}

	while (min <= max)
	{
		ch[i] = min;
		i++;
		min++;
	}
	return (ch);
}
