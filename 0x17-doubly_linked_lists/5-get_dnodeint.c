#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
* @head: pointer
* @index: index to search for, starting from 0
* Return: NULL
**/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int size;
dlistint_t *tmp;

size = 0;
if (head == NULL)
return (NULL);

tmp = head;
while (tmp)
{
if (index == size)
return (tmp);
size++;
tmp = tmp->next;
}
return (NULL);
}
