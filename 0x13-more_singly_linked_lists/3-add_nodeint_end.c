#include "list.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: head of double pointer
 * @n: int add to list
 *
 * Return: NUll if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x;
	listint_t *y;

	if (head == NULL)
		return (NULL);
	x = malloc(sizeof(listint_t));
	if (x == NULL)
		return (NULL);
	x->n = n;
	x->next = NULL;
	if (*head == NULL)
	{
		*head = x;
		return (x);
	}
	y = *head;
	while (y->next != NULL)
	{
		y = y->next;
	}
	y->next = new;
	return (x);
}
