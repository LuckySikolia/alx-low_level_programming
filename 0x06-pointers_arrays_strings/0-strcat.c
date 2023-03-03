#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: characters to be appended to
 * @src:  characters to append to dest
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	
	for (j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}

	return (dest);
}
