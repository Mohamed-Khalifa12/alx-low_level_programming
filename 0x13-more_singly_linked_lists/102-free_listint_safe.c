#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely
 *
 * @h: Pointer to a pointer to the head node of the list
 *
 * Return: The number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
    size_t count = 0;

    if (*h == NULL)
    {
        return (0);
    }

    listint_t *curr = *h;

    while (curr != NULL)
    {
        listint_t *next = curr->next;
        free(curr);
        curr = next;
        count++;
    }

    *h = NULL;
    return (count);
}
