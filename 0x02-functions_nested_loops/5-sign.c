#include "main.c"

/**
*print_sign - prints the sign of the number
*
*Return: 1 and prints + is n is greater than zero, 0 and prints 0 if n is zero, -1 and pritns - if n is less than zero.
*/

int print_sign(int n)
{
	if (n > 0) 
	{
		_putchar('+');
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	else 
	{
		_putchar(0);
	}
}
