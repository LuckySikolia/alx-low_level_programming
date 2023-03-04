#include "main.h"

/**
 * *leet -function that encodes a string into 1337..
 * @s: array
 * Return: 0 always success
 */

char *leet(char *s)
{
	int i, j;
	char c[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (c[j] != '\0')
		{
			if (s[i] == c[j])
			{
				s[i] = n[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
