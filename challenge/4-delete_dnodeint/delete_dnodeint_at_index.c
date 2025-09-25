#include <stdlib.h>
#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *node, *to_delete;
    unsigned int i = 0;

    if (!head || !*head)
        return -1;

    node = *head;
    if (index == 0)
    {
        to_delete = node;
        *head = node->next;
        if (*head)
            (*head)->prev = NULL;
        free(to_delete);
        return 1;
    }

    while (node && i < index - 1)
    {
        node = node->next;
        i++;
    }
    if (!node || !node->next)
        return -1;

    to_delete = node->next;
    node->next = to_delete->next;
    if (to_delete->next)
        to_delete->next->prev = node;
    free(to_delete);
    return 1;
}


