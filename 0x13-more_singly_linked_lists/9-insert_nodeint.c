#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node to a listint_t linked list at a given position.
 * @h: the head of the list.
 * @idx: the index where the new node needs to be inserted in the list.
 * @n: the value to assign in the new node.
 * 
 * Return: the adress of the new node on success, NULL on fauiler.
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int i;
    listint_t *new_node;
    listint_t *t;

    i = 0;
    
    if (head == NULL)
        return (NULL);
    
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);
    new_node->n = n;
    if (idx == 0 )
    {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }
    t = *head;
    while(t != NULL)
    {
        if (i == idx - 1)
        {
            new_node->next = t->next;
            t->next = new_node;
            return (new_node);
        }
        t = t->next;
        i++;
    }
    free (new_node);
    return (NULL);
}