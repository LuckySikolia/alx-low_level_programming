#include <stdio.h>

/**
 * main - print the name of the file it was compiled from
 * followed be a new line
 * Return: 0 in success
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
