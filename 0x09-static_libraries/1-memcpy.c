#include "main.h"

/**
 * *_memcpy - copies the memory area
 * @dest: destination of the memory area.(the address)
 * @src: source of the memory area (the size)
 * @n: bytes of the memory area
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (i < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
