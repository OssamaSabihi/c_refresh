#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t linked list.
 * @h: the head of the list.
 * 
 * Return: the number of nodes in the listint_t list.
 */

size_t print_listint(const listint_t *h)
{
    size_t i;

    i = 0;
    
    while (h != NULL)
    {
        printf("%d\n", h->n);
        i++;
        h = h->next;
    }

    return (i);
}