#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - searches a string for any set of bytes
 * @s: the string to be searched
 * @accept: the characters that are compared to s
 * Return: null if none is found or the pointer to s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
