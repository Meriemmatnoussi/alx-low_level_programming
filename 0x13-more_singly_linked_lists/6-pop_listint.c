#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listint_t linked list, and returns
 * the head node’s data (n).
 *
 * @head: Double pointer to the first node of the list.
 *
 * Return: The head node's data (n) or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (data);
}
