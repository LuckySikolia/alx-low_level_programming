#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: sting to be concatenated
 * @s2: sting to concatenate to s1
 * @n: input
 * Return: pointer to the newly allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *ch;

	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}

	for (i = 0; s1[i] != '\0'; i++);

	for (j = 0; s2[i] != '\0' && j < n; j++);

	if (n <= j)
	{
		n = j;
	}

	ch = malloc(sizeof(char) * (i + n + 1));

	if (ch == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < i; k++)
	{
		ch[k] = s1[k];
	}
	for (l = 0; s2[l] != '\0' && l != n; l++, i++)
	{
		ch[i] = s2[l];
	}

	ch[i] = '\0';
	return (ch);    
}
