#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list.
 * @h: double pointer to the head of the list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *temp, *loop_start;
	listint_t *slow = *h, *fast = *h;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			while (*h != slow)
			{
				temp = *h;
				*h = (*h)->next;
				free(temp);
				len++;
			}
			loop_start = slow;
			do {
				slow = slow->next;
				len++;
			} while (slow != loop_start);
			do {
				temp = *h;
				*h = (*h)->next;
				free(temp);
				len++;
			} while (*h != loop_start);
			*h = NULL;
			return (len);
		}
	}
	while (*h)
		temp = *h;
		*h = (*h)->next;
		free(temp);
		len++;
	*h = NULL;
	return (len);
}
