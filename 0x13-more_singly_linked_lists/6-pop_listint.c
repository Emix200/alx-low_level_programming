#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer
 *
 * Return: NULL
 */
int pop_listint(listint_t **head)
{
	listint_t *start;
	int x;

	if (head == NULL || *head == NULL)
		return (0);
	start = *head;
	*head = start->next;
	x = start->x;
	free(start);
	return (n);
}
