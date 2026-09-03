#include "lists.h"

/**
 * free_listint2 - frees a linked list.
 * @head: the head of the list.
 * 
 * Return: void
 */

void free_listint2(listint_t **head)
{
    listint_t *t;

    if (head == NULL)
        return;

    t = *head;
    while (t != NULL)
    {
        *head = t;
        t = t->next;
        free(*head);
    }

    *head = NULL;
}