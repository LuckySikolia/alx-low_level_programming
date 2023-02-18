#include <stdio.h>

/**
 * main- Entry point
 * @void: Null value
 *
 * Description: output single digit base 16 using putchar
 * Return: Zero value
 */


int main(void)
{
	int i;
	
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar("\n");
	return (0);
}
