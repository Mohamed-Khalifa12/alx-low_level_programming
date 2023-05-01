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
    size_t count = 0;

    if (head == NULL)
    {
        fprintf(stderr, "Error: head is null\n");
        exit(98);
    }

    while (head != NULL)
    {
        printf("%d\n", head->n);
        head = head->next;
        count++;
    }

    return (count);
}
