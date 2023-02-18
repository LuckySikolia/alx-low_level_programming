#include <stdio.h>

/**
 * main - Entry point
 * @void: Null value
 *
 * Description: output alphabet lowercase except e and q
 * Return: Zero value to successful
 */

int main(void)
{
	char alph = 'a';
	
	while(alph<='z')
	{
		if (alph !='e' && alph !='q')
		{
			putchar(alph);
		}
		alph++;
	}	
	putchar('\n');
	return(0);
}
