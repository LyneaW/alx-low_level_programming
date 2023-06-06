#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: first node
 * @index: index of the node
 *
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int y = 0;
listint_t *temp = head;

while (temp && y < index)
{
temp = temp->next;
y++;
}

return (temp ? temp : NULL);
}
