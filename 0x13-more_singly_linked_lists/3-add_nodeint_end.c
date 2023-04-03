#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: head of the list
 * @n: value to add in node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *current;

	current = *head;

	while (current && current->next != NULL)
		current = current->next;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->n = n;

	temp->next = NULL;

	if (current)
		current->next = temp;
	else
		*head = temp;

	return (temp);
}
