#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: pointer to the node
 *
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
