#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elemets of a list_t list
 * @h: pointer to the first node on the linked list
 *
 * Return: number of nodes in the linked list
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}

