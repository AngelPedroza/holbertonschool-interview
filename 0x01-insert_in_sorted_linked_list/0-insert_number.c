#include "lists.h"
#include <stdio.h>

/**
 * insert_node - Insert a new node sorted
 * @head: The pointer to header of the list
 * @number: The value to add in the new node
 * Return: the address of the new node, or NULL if it failed
 **/

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *tmp = *head;
	listint_t *new, *tmp2;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;
	new->next = NULL;

	if (!tmp || tmp->n >= number)
	{
		new->next = tmp;
		*head = new;
		return (new);
	}

	tmp2 = tmp->next;
	while (tmp && tmp2 && (tmp2->n < number))
	{
		tmp = tmp->next;
		tmp2 = tmp->next;
	}

	tmp->next = new;
	new->next = tmp2;
	return (new);
}
