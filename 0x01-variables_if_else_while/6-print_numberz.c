#include <stdio.h>

/**
 * main- Entry point
 * @void: Null value
 *
 * Description: output single digit base 10 using putchar
 * Return: Zero value
 */


int main(void)
{
	int i;
	
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
