#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with char
 * @c: The character to print
 * @size: the desired size of the array
 * Return: a pointer to the array, or NULL if it fails or is = 0
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *) malloc(size * sizeof(char));
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
