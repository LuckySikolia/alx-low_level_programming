#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: the address of memory to print
 * @b: the size of memory to print
 * @n: bytes of the memory area
 * Return: pointer to memory area of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
