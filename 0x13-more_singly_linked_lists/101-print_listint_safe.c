#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - Prints a linked list
 * @head: A pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *turtle, *hare;

	turtle = head;
	hare = head;

	while (turtle != NULL && hare != NULL && hare->next != NULL)
	{
		printf("[%p] %d\n", (void *)turtle, turtle->n);
		turtle = turtle->next;
		hare = hare->next->next;

	if (turtle == hare)
	{
		printf("[%p] %d\n", (void *)turtle, turtle->n);
		printf("Loop detected, exiting...\n");
		exit(98);
	}
	}

	while (turtle != NULL)
	{
		printf("[%p] %d\n", (void *)turtle, turtle->n);
		turtle = turtle->next;
	}

	return (0);
}
