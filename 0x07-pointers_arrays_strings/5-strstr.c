#include "main.h"
# include <stddef.h>

/**
 * *_strstr - locates a substring
 *@haystack: the string to be searched
 *@needle: the substring to be searched in haystack
 *Return: the pointer at the beginning ig the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] != '\0')
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
