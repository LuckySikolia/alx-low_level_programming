#include "main.h"

/**
 * factorial - gets the factorial of a number
 * @n: the number for the factorial
 * Return: -1 if error, return 1 if zero else return factorial
*/

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
