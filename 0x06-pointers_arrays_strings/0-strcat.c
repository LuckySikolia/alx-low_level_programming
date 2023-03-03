#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: string with concatenation
 * @src: string to be concatenated
 * 
 * Return: 0 always success
*/

char *_strcat(char *dest, char *src)
{
    int i;
    int j;

    for (i = 0; dest[i] != '\0'; i++);

    for (j = 0; src[j] != '\0'; i++, j++)
    {
        dest[i] = src[j];
    }
    
    return (dest);
}
