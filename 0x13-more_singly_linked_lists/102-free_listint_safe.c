#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely
 *
 * @h: Pointer to a pointer to the head node of the list
 *
 * Return: The number of nodes in the list that were freed
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *slow, *fast;
    size_t count;

    if (h == NULL || *h == NULL)
    {
        return (0);
    }

    slow = *h;
    fast = (*h)->next;
    count = 1;

    while (fast != NULL && fast->next != NULL)
    {
        if (slow == fast)
        {
            slow = slow->next;
            while (slow != fast)
            {
                count++;
                slow = slow->next;
            }
            count++;
            break;
        }

        slow = slow->next;
        fast = fast->next->next;
        count++;
    }

    slow = *h;
    fast = (*h)->next;
    while (fast != NULL)
    {
        free(slow);
        slow = fast;
        fast = fast->next;
        if (slow == *h)
        {
            break;
        }
    }
    free(slow);
    *h = NULL;

    return (count);
}
