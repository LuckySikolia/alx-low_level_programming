#include "main.h"
#include <string.h>

/**
 * _strlen - Function that returns the length of a string
 *
 * @s: this is the input string
 *
 * Return: Lenngth of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
