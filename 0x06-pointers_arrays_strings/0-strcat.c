#include "main.h"
/**
 * _strcat - concatenates two strings
 * @src: character to append to dest
 * @dest: character to be appended to
 * Return: 0 always success
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
