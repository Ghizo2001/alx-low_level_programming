#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current_node = *head;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}
	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->next = NULL;
	new_node->len = len;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		while (current_node->next)
		{
			current_node = current_node->next;
		}
		current_node->next = new_node;
	}
	return (new_node);
}
