#include "main.h"
#include <stdio.h>

/**
*print_most_numbers - print numbers from "0" to "9", except 2 and 4
*
*Return: Always 0 (Success)
**/

void print_most_numbers(void)
{
	char num;
	
	for (num = '0'; num <= '9'; num++)
	{
		if (num != '2' && num != '4')
		_putchar (num);
	}
	_putchar (10);
}
