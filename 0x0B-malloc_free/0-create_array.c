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
	char *array = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		array = (char *)malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
				array[i] = c;
		}
	}
	return (array);
}
