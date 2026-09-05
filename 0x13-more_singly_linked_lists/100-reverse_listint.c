#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list using a maximum of one loop and two variables
 * @head: the head of the list.
 * 
 * Return:the new head of the list.
 */

listint_t *reverse_listint(listint_t **head)
{
    listint_t *i;
    listint_t *j;

    if (head == NULL || *head == NULL)
        return (NULL);
    j = NULL;
    while (*head != NULL)
    {
        i = (*head)->next;
        (*head)->next = j;
        j = *head;
        *head = i;
    }

    *head = j;
    return (*head);
}