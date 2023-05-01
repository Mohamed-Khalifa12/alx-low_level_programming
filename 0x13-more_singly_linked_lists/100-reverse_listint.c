#include "lists.h"

/**
 * reverse_listint - Reverses a singly linked list
 *
 * @head: Pointer to a pointer to the head node of the list
 *
 * Return: Pointer to the new head node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *prev = NULL, *curr = *head, *next;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    *head = prev;
    return (*head);
}
