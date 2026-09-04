#include "lists.h"

/**
 * elete_nodeint_at_index -  deletes a node at a given index of a listint_t linked list
 * @head: the head of the list.
 * @index: the index of the node to delete.
 * 
 * Return:1 on success -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    unsigned int i;
    listint_t *t;
    listint_t *t2;

    i = 0;
    if (head == NULL)
        return (-1);
    t = *head;

    if (index == 0)
    {
        *head = t->next;
        free(t);
        return (1);
    }

    while(t != NULL)
    {
        if (i == index - 1)
        {
            t2 = t->next;
            t->next = t->next->next;
            free (t2);
            return (1);
        }
        i++;
    }
    return (-1);

}