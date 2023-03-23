#include "function_pointers.h"

/**
 * int_index - return the index of the first element
 * @size: no of array elements in array
 * @array: Pointer array
 * @cmp: is a pointer to the function used to compre values
 * Return: -1 if no match, -1 if size <=0, first element
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}

	for (; i <= size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
