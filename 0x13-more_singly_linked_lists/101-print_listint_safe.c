#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely 
 * (can print lists conatining loops).
 * @head: the head of the list
 * 
 * Return: the number of the nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
    const listint_t *t;
    const listint_t *check;
    const listint_t *t2;
    size_t i = 0;

    if (head == NULL)
        return (0);

    t2 = head;
    while (head != NULL)
    {
        t = t2;
        check = head->next;
        while (t != NULL)
        {
            if (check == t)
            {
                printf("[%p] %d\n", head, head->n);
                printf("-> [%p] %d\n", check, check->n);
                return (++i);
            }
            if (t == head)
                break;
            t = t->next;
        }

        printf("[%p] %d\n", head, head->n);
        i++;
        head = head->next;
    }
    
    return (i);
}