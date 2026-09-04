#include "lists.h"

/**
 * sum_list - returns the sum of all the data (n) of a listint_t linked list.
 * @h: the head of the list.
 * 
 * Return: the sum of all the data of a linked list.
 */

int sum_listint(listint_t *head)
{
    int result;

    result = 0;

    if (head == NULL)
        return (0);

    while (head != NULL)
    {
        result += head->n;
        head = head->next;
    }

    return (result);
}