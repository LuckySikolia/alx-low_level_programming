#include "main.h"

/**
 * *leet -function that encodes a string into 1337..
 * @s: array
 * Return: 0 always success
 */

char *leet(char *s)
{
	int i = 0;

	char letrs[] = "AaEeIiOoTtLl";
	char num[] = "4433007711";

	while (s[i] != '\0')
	{
		int j = 0;

		while (letrs[j] != '\0')
		{
			if (s[i] == letrs[j])
			{
				s[i] = num[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
