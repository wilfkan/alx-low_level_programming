#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - returns the sum of all the data of a linked list
 * @head: head of the linked list
 * Return: sum, if the list is empty return 0
 */
int sum_listint(listint_t *head)
{
	listint_t *c;
	int sum = 0;

	if (head == NULL)
		return(0);

	c = head;

	while (c != NULL)
	{
		sum += c->n;
		c = c->next;
	}
	return(sum);
}
