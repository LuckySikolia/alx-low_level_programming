#include "main.h"

/**
 * *_strncpy - function that copies a string.
 * @dest: parameter to be appended
 * @src: parameter to append to dest
 * @n: maximum number of bytes usable
 * Return: pointer to destination string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
