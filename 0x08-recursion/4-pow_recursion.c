#include "main.h"

/**
 * _pow_recursion - finds the power of x raised to y
 * @x: the number to be raised
 * @y: the power number
 * Return: -1 if y is <0 else the value of the raised number
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
