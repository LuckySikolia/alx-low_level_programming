#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of square matrix diagonal
 * @a: array to be printed
 * @size: size of a
 * Return: sum of diagonals
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	unsigned int sum1 = 0;
	unsigned int sum2 = 0;

	for (; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += a[i * size + j];
			}
			if (i + j == size - 1)
			{
				sum2 += a[i * size + j];
			}
		}
	}
	printf("%d, %d \n", sum1, sum2);
}
