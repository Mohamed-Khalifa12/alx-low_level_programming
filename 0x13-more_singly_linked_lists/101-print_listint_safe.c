#include "lists.h"

/**
 * print_listint_safe - Prints the contents of a linked list safely
 *
 * @head: Pointer to the head node of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow, *fast;
    size_t count;

    if (head == NULL)
    {
        fprintf(stderr, "Error: head is null\n");
        exit(98);
    }

    slow = head;
    fast = head;
    count = 0;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            printf("-> [%p] %d\n", (void *)slow, slow->n);
            break;
        }

        printf("[%p] %d\n", (void *)slow, slow->n);
        count++;
    }

    if (fast == NULL || fast->next == NULL)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        count++;
    }

    slow = head;
    while (slow != fast)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        count++;
        slow = slow->next;
        fast = fast->next;
    }

    printf("-> [%p] %d\n", (void *)slow, slow->n);
    count++;

    return (count);
}
