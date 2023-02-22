#include "main.h"

/**
*main - check for lowercase character using _islower
*
* @c: is the character to check
*
*Return: 1 if c is lowercase, 0 otherwise
*/

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
