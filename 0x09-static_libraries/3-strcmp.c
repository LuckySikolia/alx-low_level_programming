#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: parameter to be compared to s2
 * @s2: parameter to be compared to s1
 * Return: 0 if equal, -1 if less +1 if more
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			break;
		i++;
	}
	return (s1[i] - s2[i]);
}
