#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to head of list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *loop_start;
	size_t i = 0, j;

	current = head;
	while (current != NULL)
	{
		loop_start = current;
		for (j = 0; j < i; j++)
		{
			if (loop_start == current)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				exit(98);
			}
			loop_start = loop_start->next;
		}
		printf("[%p] %d\n", (void *)current, current->n);
		i++;
		current = current->next;
	}

	return (i);
}
