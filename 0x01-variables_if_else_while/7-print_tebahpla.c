#include <stdio.h>

/**
 * main- Entry point
 * @void: Null value
 *
 * Description: output reverse lowercase alphabet
 * Return: Zero value
 */

int main(void)
{
	char alph  = 'z';
	
	while(alph >= 'a')
	{
		putchar(alph);
		--alph;
	}
	putchar("\n");
	return (0);
}
