#include "lists.h"

/**
 * add_node_end - adds a node at the end of a singly linked list.
 * @head: the head of the list
 * @str: a string to store in the list
 * 
 * Return: a pointer to the new node on success or NULL on failuer.
 */

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node;
    list_t *t = *head;
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);
    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        free(new_node);
        return (NULL);
    }
    new_node->len = strlen(str);
    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }
    while(t->next != NULL)
    {
        t = t->next;
    }
    t->next = new_node;
    new_node->next = NULL;
    return (new_node);
}