#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the noodes
 *
 * Return: NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *dog, *cat;

	dog = cat = head;
	while (dog && cat && cat->next)
	{
		dog = dog->next;
		cat = cat->next->next;
		if (dog == cat)
		{
			dog = head;
			break;
		}
	}
	if (!dog || !cat || !cat->next)
		return (NULL);
	while (dog != cat)
	{
		dog = dog->next;
		cat = cat->next;
	}
	return (cat);
}
