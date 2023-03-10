#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: int count of arguments passed
 * @argv: pointer to array pointer
 * Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
