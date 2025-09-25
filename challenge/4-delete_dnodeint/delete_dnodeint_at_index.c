#include <stdlib.h>
#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *saved, *to_delete;
    unsigned int i;

    if (head == NULL || *head == NULL)
        return -1;

    if (index == 0)
    {
        to_delete = *head;
        *head = (*head)->next;
        if (*head)
            (*head)->prev = NULL;
        free(to_delete);
        return 1;
    }

    saved = *head;
    for (i = 0; i < index && *head; i++)
        *head = (*head)->next;

    if (*head == NULL)
    {
        *head = saved;
        return -1;
    }

    if ((*head)->prev)
        (*head)->prev->next = (*head)->next;
    if ((*head)->next)
        (*head)->next->prev = (*head)->prev;

    free(*head);
    *head = saved;
    return 1;
}


