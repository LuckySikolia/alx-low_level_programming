#include "main.h"
#include <stdlib.h>

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: pointer to previously attached memory
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the new memory block
 * Return: output
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ar;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ar = malloc(sizeof(char) * new_size);
		if (ar == NULL)
		{
			return (NULL);
		}
		else
		{
			free(ptr);
			return (ar);
		}
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	ar = malloc(sizeof(char) * new_size);
	if (ar == NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		free(ptr);
		return (ar);
	}
}
