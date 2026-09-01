#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a listint_t linked list.
 * @h: the head of the list.
 * 
 * Return: the number of the elements in the list.
 */

size_t listint_len(const listint_t *h)
{
    size_t i;

    i = 0;

    while (h != NULL)
    {
        i++;
        h = h->next;
    }

    return (i);
}