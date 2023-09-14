#include "lists.h"

/**
 * free_dlistint - Function that frees a dlistint_t list
 *
 * @head: the list's head
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
