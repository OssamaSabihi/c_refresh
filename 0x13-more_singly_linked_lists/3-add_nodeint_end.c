#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list.
 * @head: the head of the list.
 * @n: integer to asign to the new element.
 * 
 * Return: the adress of the new element on success , NULL on failure.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node;
    listint_t *t;

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    t = *head;
    while (t->next != NULL)
        t = t->next;

    t->next = new_node;

    return (new_node);
}