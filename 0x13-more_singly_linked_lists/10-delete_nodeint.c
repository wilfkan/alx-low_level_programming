#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index -  deletes the node at index of a linked list
 * @head: head of the linked list
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *c;
	listint_t *tmp;

	if (head == NULL || (*head) == NULL)
		return (-1);

	c = *head;
	if (index == 0)
	{
		if ((*head)->next)
			(*head) = (*head)->next;
		else
			(*head) = NULL;
		free(c);
		return (1);
	}

	while (index != 1)
	{
		if (c->next == NULL)
			return (-1);

		c = c->next;
		--index;
	}
	tmp = c->next;
	if (c->next->next)
		c->next = c->next->next;
	else
		c->next = NULL;
	free(tmp);

	return (1);
}
