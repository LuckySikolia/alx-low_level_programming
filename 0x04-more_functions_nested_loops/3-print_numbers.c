#include "main.h"

/**
 * print_numbers - prints 0123456789\n
 *
 *
 * Return: void
 */

void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num)
	{
		_putchar(num);
	}
	_putchar(10);
}
