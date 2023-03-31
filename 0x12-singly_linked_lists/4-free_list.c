#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to head node
 * Return: void
*/
void free_list(list_t *head)
{
	list_t *temp = head;
	list_t *next;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp->str);
		free(temp);

		temp = next;
	}
}
