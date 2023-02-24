#include "main.h"

/**
 * print_line -  Write a function that draws a straight line in the terminal
 *
 * @n: number of times
 *
 *Return: void
 */

void print_line(int n)
{
	int count;

	for (count = 1; n >= 1 && count <= n; count++)
	{
		_putchar(95);
	}
	_putchar(10);
}
