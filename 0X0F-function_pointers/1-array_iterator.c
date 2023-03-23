#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each array element
 * @size: size of the array
 * @action: a pointer to the function to be used
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
