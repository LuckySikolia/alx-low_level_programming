#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - perform simple operations
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: Always 0 success
*/
int main(int argc, int *argv[])
{
	int (*opr)(int, int);

	if (argc != 4)
	{
		printf("Error \n");
		exit(98);
	}

	opr = get_op_func(argv[2]);

	if (!opr)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", opr(atoi(argv[1], atoi(argv[3])));
	return (0);
}
