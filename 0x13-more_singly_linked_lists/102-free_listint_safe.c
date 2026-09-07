#include "lists.h"

/**
 * break_loop - scans a list and severs any loop by setting tail->next to NULL
 * @head: pointer to the head of the list
 */
void break_loop(listint_t *head)
{
	listint_t *t, *check;

	t = head;
	while (t != NULL)
	{
		check = head;
		while (check != t)
		{
			if (t->next == check)
			{
				t->next = NULL;
				return;
			}
			check = check->next;
		}
		if (t->next == t)
		{
			t->next = NULL;
			return;
		}
		t = t->next;
	}
}

/**
 * free_listint_safe - frees a listint_t linked list safely
 * @h: double pointer to the head of the list
 *
 * Return: number of nodes in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *t, *next;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	break_loop(*h);

	t = *h;
	while (t != NULL)
	{
		next = t->next;
		free(t);
		count++;
		t = next;
	}

	*h = NULL;
	return (count);
}