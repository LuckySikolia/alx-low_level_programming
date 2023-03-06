#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * *_strchr - locates a character in a string
 * @s: the string
 * @c: the character to be located
 * Return: first occurence of C else return NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
