#include "main.h"

/**
*main - print the alphabet in lowecase followed by a new line
*
*Return: Always 0 (Success)
*/

void pritn_alphabet_x10(void)
{
	for (char alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar(10);
	return (0);
}
