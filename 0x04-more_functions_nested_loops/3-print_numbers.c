#include "main.h"
#include <stdio.h>

/**
*print_numbers - print numbers from 0 to 9 followed by a new line
*
*
*
*Return: Always 0 (Success)
*/

void print_numbers(void)
{
	char num;
	
	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar(10);
}
