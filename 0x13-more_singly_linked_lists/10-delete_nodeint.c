#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t list
 * @head: pointer
 * @index: index
 *
 * Return: 1 (Success) or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp = *head;
listint_t *current = NULL;
unsigned int p = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}

while (p < index - 1)
{
if (!temp || !(temp->next))
return (-1);
temp = temp->next;
p++;
}


current = temp->next;
temp->next = current->next;
free(current);

return (1);
}
