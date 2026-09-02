#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginig of a listint_t linked list.
 * @h: the head of the list.
 * @n: integer to asign to the new element.
 * 
 * Return: the adress of the new element on success , NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new;

    if(head == NULL)
        return (NULL);

    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    new->next = *head;
    *head = new;

    return (new);
}