#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *node = head, *prev = NULL;

	while (node)
	{
		count++;
		printf("[%p] %d\n", (void *)node, node->n);
		prev = node;
		node = node->next;
		if (node >= prev)
		{
			printf("-> [%p] %d\n", (void *)node, node->n);
			exit(98);
		}
	}
	return (count);
}
