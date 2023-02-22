#include "main.h"

/**
*main - print 10 times the alphabet in lowercase followed by a new line
*
*Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	for (int i = 0; i <10; i++)
	{
		for (char alph= 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar(10);
	}
	return (0);
}
