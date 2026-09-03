#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */

int pop_listint(listint_t **head)
{
    listint_t *t;
    int i;

    if (head == NULL || *head == NULL)
        return (0);
    
    t = *head;
    i = t->n;
    t = t->next;
    free(*head);
    *head = t;

    return (i);
}