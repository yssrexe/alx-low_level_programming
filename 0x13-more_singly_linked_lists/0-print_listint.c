#include "lists.h"

/**
 * print_listint - function that prints all elements of a listint_t
 * @h: h
 * Return: return the number of nodes
 */

size_t print_listint(const listint_t *h)
{
    int i = 0;

    while (h)
    {
        i++;
        printf("%d\n", h->n);
        h = h->next;
    }
    return (i);
    
}
