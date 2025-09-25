#include <stdlib.h>
#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *node = malloc(sizeof(dlistint_t));
    dlistint_t *tail;
    if (!node)
        return NULL;
    node->n = n;
    node->next = NULL;
    node->prev = NULL;

    if (!head)
        return NULL;

    if (*head == NULL)
    {
        *head = node;
        return node;
    }

    tail = *head;
    while (tail->next)
        tail = tail->next;
    tail->next = node;
    node->prev = tail;
    return node;
}


