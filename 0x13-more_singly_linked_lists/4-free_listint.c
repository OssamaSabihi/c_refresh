#include "lists.h"

/**
 * free_listint - frees a list.
 * @head: the head of the list.
 * 
 * Return: void.
 */

void free_listint(listint_t *head)
{
    listint_t *t;

    if (head == NULL)
        return;
    t = head;
    while (t->next != NULL)
    {
        head = t;
        t = head->next;
        free(head);
    }
    free(t);
}