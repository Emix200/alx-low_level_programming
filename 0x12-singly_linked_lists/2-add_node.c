#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - function that returns the length of a string
 * @s: s is a character
 *
 * Return: x
 */
int _strlen(const char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @head: head of a list_t list
 * @str: value to insert into element.
 *
 * Return: the number of node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);
	add->next = *head;
	*head = add;

	return (add);
}
