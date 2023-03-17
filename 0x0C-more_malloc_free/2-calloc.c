#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of array elements to be allocated
 * @size: size of the elements
 * Return: pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ch;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ch = malloc(nmemb * size);

	if (ch == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		ch[i] = 0;
	}
	return (ch);
}
