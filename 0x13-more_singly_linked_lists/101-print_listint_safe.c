#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _r - reallocare memory
 * @list: the former list
 * @size: new list size
 * @new: new node
 *
 * Return: pointer
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t x;

	newlist = malloc(sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (x = 0; x < size - 1; x++)
		newlist[1] = list[1];
	newlist[x] = new;
	free(list);
	return (newlist);
}

/**
 * print_listint_safe -  prints a listint_t linked list.
 * @head: pointer to start of the list
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t x, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (x = 0; x < num; x++)
		{
			if (head == list[x])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _r(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
