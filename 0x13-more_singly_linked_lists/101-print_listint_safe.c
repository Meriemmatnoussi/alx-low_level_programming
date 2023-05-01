#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list.
 *                      Can handle linked lists with a loop.
 *
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow, *fast;

	if (head == NULL)
		exit(98);

	slow = head;
	fast = head;

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

		/* Detect a loop */
			break;
		}
	}

	/* If the loop has been detected */
	if (slow == fast)
	{
		slow = head;

		while (slow != fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			count++;

			slow = slow->next;
			fast = fast->next;
		}

		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;

		printf("-> [%p] %d\n", (void *)fast, fast->n);
	}
	/* If there is no loop */
	else
	{
		while (slow != NULL)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			count++;

			slow = slow->next;
		}
	}

	return (count);
}
