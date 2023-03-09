#include "main.h"

/**
 * _print_rev_recursion - reverse string
 * @s: the string to be reversed
 * Return: return 0 when successfull
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
