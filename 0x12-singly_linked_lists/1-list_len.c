#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
size_t t = 0;

while (h)
{
t++;
h = h->next;
}
return (t);
}
