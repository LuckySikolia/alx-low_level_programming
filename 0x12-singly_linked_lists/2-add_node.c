#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add a new node at the begining of a linked list
 * @head: double pointet to the head node
 * @str: pointer to a string
 * Return: address to the new element or null if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	int len;

	struct list_s *newNode = malloc(sizeof(struct list_s));

	if (newNode == NULL)
	{
		return (NULL);
	}

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
