#include <stdio.h>

/**
 * main - Entry point
 * @void: Null value
 *
 * Description: output alphabet lowercase
 * Return: Zero value to successful
 */

int main(void)
{
	char alphabet;
	
	for (alphabet='a'; alphabet<='z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return(0);
}
