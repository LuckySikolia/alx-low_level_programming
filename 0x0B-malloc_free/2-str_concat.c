#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string to be concatenated to
 * @s2: string to concatenate to s1
 * Return: a pointer to the concatenated string, or NULL if empty or fails
 */

char *str_concat(char *s1, char *s2)
{
	char *contstr;
	int i = 0;
	int j;

	if (s1 == NULL)
	{
		return (NULL);
	}

	contstr = (char *)malloc((i + 1) * sizeof(char));

	for (i = 0; s1[i] != '\0'; i++)
	{
		contstr[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++, i++)
	{
		contstr[i] = s2[j];
	}

	contstr[i] = '\0';
	return (contstr);
}
