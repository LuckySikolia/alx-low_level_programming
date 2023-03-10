#include "main.h"

/**
 * _strspn - get length of prefix substring
 * @s: initial segment of string
 * @accept: contains bytes
 * Return: no on bytes in s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, len;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (len);
}
