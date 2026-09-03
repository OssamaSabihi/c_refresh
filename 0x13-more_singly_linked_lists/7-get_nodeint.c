#include "lists.h"

/**
 * get_nodeint_at_index - locates a given node of a listint_t linked list.
 * @head: the head of the list.
 * @index: the index of the desired node.
 * 
 * Return: the adress of the node on success or NULL on failure.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i;

    i = 0;

    while(head != NULL)
    {
        if (i == index)
            return (head);
            
        head = head->next;
        i++;
    }
    return (NULL);
}