#include "lists.h"

/**
 * recursive - pass recursive the list and compare
 * @head: The head of the list
 * @tmp: the pointer for send to the final of the list
 * Return: NULL if fails or the header to compare
 */
listint_t *recursive(listint_t **head, listint_t **tmp)
{
	listint_t *final = NULL;

	if (!*tmp)
		return (NULL);

	final = recursive(head, &(*tmp)->next);

	if (!(*tmp)->next && final == NULL)
	{
		if ((*head)->n == (*tmp)->n)
		{
			final = *head;
			return (final->next);
		}
		else
			return (NULL);
	}
	else if (final)
	{
		if (final->n == (*tmp)->n)
		{
			if (final->next)
				return (final->next);
			else
				return (final);
		}
		else
			return (NULL);
	}

	return (NULL);
}


/**
 * is_palindrome - verify if the list is palindrome
 * @head: THe head of the list
 * Return: 1 if is palindrome or 0 if not
 */
int is_palindrome(listint_t **head)
{
	listint_t *tmp, *value;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	tmp = *head;

	value = recursive(head, &tmp);

	if (!value)
		return (0);

	return (1);
}
