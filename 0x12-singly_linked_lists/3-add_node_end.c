#include "lists.h"
#include <string.h>

/**
 * add_node_end - add node at end of list
 * @head: double pointer to head node
 * @str: pointer to string
 * Return: address of new element or null on error
*/
list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	struct list_s *newNodeEnd = malloc(sizeof(struct list_s));

	if (newNodeEnd == NULL)
	{
		return (NULL);
	}
	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (*head == NULL)
	{
		*head = newNodeEnd;
	}
	else
	{
		list_t *temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNodeEnd;
	}
	newNodeEnd->len = len;
	newNodeEnd->str = strdup(str);
	newNodeEnd->next = NULL;

	return (newNodeEnd);
}
