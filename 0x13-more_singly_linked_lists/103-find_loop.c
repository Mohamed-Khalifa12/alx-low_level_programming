#include "lists.h"

/**
 * find_listint_loop - Finds the node where a loop starts in a linked list.
 * @head: A pointer to the head node of the list.
 *
 * Return: If a loop is found - the address of the node where the loop starts.
 *         Otherwise - NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *tortoise, *hare;

    if (head == NULL)
        return (NULL);

    tortoise = head;
    hare = head;

    while (hare != NULL && hare->next != NULL)
    {
        tortoise = tortoise->next;
        hare = hare->next->next;

        if (tortoise == hare)
        {
            tortoise = head;

            while (tortoise != hare)
            {
                tortoise = tortoise->next;
                hare = hare->next;
            }

            return (tortoise);
        }
    }

    return (NULL);
}
