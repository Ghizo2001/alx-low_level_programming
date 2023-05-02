#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head node of the list
 * @index: index of the node, starting at 0
 *
 * Return: pointer to the nth node, or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current_node;

	if (head == NULL)
		return (NULL);

	current_node = head;
	while (i < index && current_node != NULL)
	{
		current_node = current_node->next;
		i++;
	}
	if (i == index && current_node != NULL)
		return (current_node);
	else
		return (NULL);
}
