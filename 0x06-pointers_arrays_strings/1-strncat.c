#include "main.h"

/**
 * *_strncat - function used to concatenate two strings
 * @dest: parameter to be appended
 * @src: parameter to append to dest
 * @n: maximum number of bytes usable
 * Return: 0 always success
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] += src[j];
		i++;
		j++;
	}
	return (dest);
}
