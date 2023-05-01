#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list (if any)
 *
 * @head: Pointer to the head node of the list
 *
 * Return: Pointer to the node where the loop starts, NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
    if (head == NULL)
    {
        return (NULL);
    }

    listint_t *slow = head, *fast = head;

    while (fast != NULL)
    {
        slow = slow->next;
        fast = fast->next;

        if (fast != NULL)
        {
            fast = fast->next;
        }
        else
        {
            break;
        }

        if (slow == fast)
        {
            break;
        }
    }

    if (fast == NULL)
    {
        return (NULL);
    }

    slow = head;

    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    return (slow);
}
