#include "lists.h"
#include <stdlib.h>

/**
 * free_listint -  frees a listint_t list
 * @head: the list head
 *
 * Return: NULL if error
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
