#include "lists.h"

/**
 * find_listint_loop -  finds the loop contained in a listint_t linked list using a maximum of two variables.
 * @head: the head of the list.
 * 
 * Return: returns the address of the node where the loop starts or NULL if no loop is found
 */

listint_t *find_listint_loop(listint_t *head)
{
    listint_t *tortoise;
    listint_t *hare;

    if (head == NULL || head->next == NULL)
        return (NULL);

    tortoise = head->next;
    hare = head->next->next;
    while (hare != NULL)
    {
        if (tortoise == hare)
        {
            tortoise = head;
            while (tortoise != hare)
            {
                tortoise = tortoise->next;
                hare = hare->next;
            }
            return (hare);
        }
        hare = hare->next;
        if (hare == NULL)
            return (NULL);
        hare = hare->next;
        tortoise = tortoise->next;
    }

    return (NULL);
}