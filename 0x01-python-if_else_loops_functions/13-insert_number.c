#include "lists.h"
#include <stdlib.h>

/**
 * insert_node - inserts node in sorted list
 * @head: address of head pointer
 * @number: number to insert
 * Return: inserted node
 */
listint_t *insert node(listint_t **head, int number)
{
	listint_t *new, *tmp, *prev;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = number;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	if ((*head)->n > number)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp && tmp->n < number)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	if (tmp == NULL)
	{
		prev->next = new;
		new->next = NULL;
		return (new);
	}
	else
	{
		prev->next = new;
		new->next = tmp;
		return (new);
	}
	return (NULL);
}
