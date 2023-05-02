#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 * @head: pointer to pointer to the head node of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if the deletion succeeded, or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *old;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	old = NULL;
	while (i < index && current != NULL)
	{
		old = current;
		current = current->next;
		i++;
	}
	if (i != index || current == NULL)
		return (-1);
	if (old != NULL)
		old->next = current->next;
	else
		*head = current->next;
	free(current);

	return (1);
}
