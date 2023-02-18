#include <stdio.h>

/**
 * main- Entry point
 * @void: Null value
 *
 * Description: output lowercase and uppercase
 * Return: Zero value
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
