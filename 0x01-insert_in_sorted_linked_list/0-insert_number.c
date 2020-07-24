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
    listint_t *new;

    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);
    new->n = number;
    new->next = NULL; 

    while (tmp->next)
    {
        if (number >= tmp->n && number < tmp->next->n)
        {
            new->next = tmp->next;
            tmp->next = new;
            return (new);
        }
        tmp = tmp->next;
    }

    return (NULL);
 }
