#include "main.h"

/**
*main - print _putchar followed by a new line
*
*Return: Always 0 (Success)
*/

int main(void)
{
	char str[10] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
	return (0);
}
