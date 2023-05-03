#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the first node in the list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *new_head = NULL, *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = new_head;
		new_head = *head;
		*head = next;
	}
	*head = new_head;
	return (new_head);
}
