#include <stdlib.h>
#include "lists.h"

void free_dlistint(dlistint_t *head)
{
    dlistint_t *node;
    while (head)
    {
        node = head->next;
        free(head);
        head = node;
    }
}


