#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a copy of a string
 * @str: The duplicate sting to print
 * Return: a pointer to the duplicate string, or NULL if it fails
 */

char *_strdup(char *str)
{
	char *dupsrt;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	dupsrt = (char *)malloc((i + 1) * sizeof(char));

	if (dupsrt == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		dupsrt[i] = str[i];
		i++;
	}

	dupsrt[i] = '\0';

	return (dupsrt);
}
