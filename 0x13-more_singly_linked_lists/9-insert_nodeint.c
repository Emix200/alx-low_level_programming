#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -  inserts a new node
 * @head: double pointer
 * @idx: index to the node
 * @n: integer
 *
 * Return: NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *temp, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (x = 0; x < idx - 1 && temp != NULL; x++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
