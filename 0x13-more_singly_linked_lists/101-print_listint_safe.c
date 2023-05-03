#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	size_t count = 0;

	while (fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			count++;
			printf("-> [%p] %d\n", (void *)fast->next, fast->next->n);

			while (head != fast->next)
			{
				printf("[%p] %d\n", (void *)head, head->n);
				count++;
				head = head->next;
				fast = fast->next;
			}
			exit(98);
		}
	}
	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
	}
	return (count);
}
