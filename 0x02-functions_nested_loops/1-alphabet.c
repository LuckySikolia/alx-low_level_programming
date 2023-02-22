#include "main.h"

/**
*print_alphabet - print the alphabet in lowecase followed by a new line
*
*Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar(10);
}
