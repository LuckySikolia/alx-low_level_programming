#include "main.h"
#include <stdio.h>

/**
*_isdigit - check for a digit from 0 to 9
*
*@c: this is the entry
*
*Return: Always 0 (Success) or 1 if uppercase
**/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
