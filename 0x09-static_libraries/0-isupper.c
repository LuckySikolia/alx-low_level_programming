#include "main.h"
#include <stdio.h>

/**
*_isupper - check for uppercase character
*
*@c: this is the entry
*
*Return: Always 0 (Success) or 1 if uppercase
**/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
